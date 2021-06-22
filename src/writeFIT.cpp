#include "writeFIT.h"
#include "Windows.h"
#include <functional>
#include "shlwapi.h"

std::wstring s2ws(const std::string& str)
{
	int size_needed = MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), NULL, 0);
	std::wstring wstrTo(size_needed, 0);
	MultiByteToWideChar(CP_UTF8, 0, &str[0], (int)str.size(), &wstrTo[0], size_needed);
	return wstrTo;
}

writeFIT::writeFIT(unsigned int functionalThresholdPower, unsigned int powerRange)
	: encode(fit::ProtocolVersion::V10)
{
	memset(outputFileName, NULL, sizeof(outputFileName));
	this->functionalThresholdPower = functionalThresholdPower;
	this->powerRange = powerRange;
}

writeFIT::~writeFIT()
{
	if (outputFile.is_open())
	{
		encode.Close();
		outputFile.close();
	}
}

void writeFIT::createFile(char* fileName)
{
	strcpy(outputFileName, fileName);
	outputFile.open(outputFileName, std::ios::in | std::ios::out | std::ios::binary | std::ios::trunc);
	encode.Open(outputFile);
}

void writeFIT::closeFile()
{
	if (outputFile.is_open())
	{
		encode.Close();
		outputFile.close();
	}
}

void writeFIT::fillFile(workoutInfo& data)
{
	fillFileId();

	fillFileCreator();
	
	fillWorkout(data.numberOfSteps);
	
	fillWorkoutStep(data);
}

void writeFIT::fillFileId()
{
	fit::FileIdMesg fileIdMesg; // Every FIT file requires a File ID message
	fileIdMesg.SetType(FIT_FILE_WORKOUT);
	fileIdMesg.SetManufacturer(FIT_MANUFACTURER_GARMIN);
	//fileIdMesg.SetProduct(65534); //65534 = Garmin Edge 520
	//fileIdMesg.SetSerialNumber(128779944); //My Serial Number
	//fileIdMesg.SetTimeCreated(915630319); //A random created time
	fileIdMesg.SetNumber((FIT_UINT16)std::hash<std::string>{}(outputFileName)); //creating a hash from based on file name to be used as a unique identifier

	encode.Write(fileIdMesg);

}

void writeFIT::fillFileCreator()
{
	fit::FileCreatorMesg fileCreatorMesg;
	fileCreatorMesg.SetSoftwareVersion(0);
	fileCreatorMesg.SetHardwareVersion(0);

	encode.Write(fileCreatorMesg);
}

void writeFIT::fillWorkout(FIT_UINT16 numValidSteps)
{
	fit::WorkoutMesg workoutMesg;
	char workoutName[_MAX_PATH];
	string fileName = outputFileName;
	fileName = fileName.substr(fileName.find_last_of("/\\") + 1);
	strcpy(workoutName, fileName.c_str());
	workoutName[strlen(workoutName) - SIZE_OF_FILE_EXTENSION] = '\0';

	workoutMesg.SetCapabilities(FIT_WORKOUT_CAPABILITIES_TCX);
	workoutMesg.SetNumValidSteps(numValidSteps); //THIS IS THE NUMBER OF STEPS
	workoutMesg.SetSport(FIT_SPORT_CYCLING);
	workoutMesg.SetWktName(s2ws(workoutName));
	encode.Write(workoutMesg);
}

void writeFIT::fillWorkoutStep(workoutInfo& data)
{
	for (unsigned int i = 0; i < data.numberOfSteps; i++)
	{
		fit::WorkoutStepMesg workoutStepMesg;
		workoutStepMesg.SetDurationValue(FIT_UINT32(round(data.workoutTimeValue[i] * 60)) * 1000); //step time in ms
		workoutStepMesg.SetTargetValue(0);
		if (data.workoutFTPValues[i][INITIALFTP] == data.workoutFTPValues[i][FINALFTP])
		{
			FIT_UINT32 value = FIT_UINT32(data.workoutFTPValues[i][INITIALFTP] * 0.01 * functionalThresholdPower);
			workoutStepMesg.SetCustomTargetValueLow(value + VALUE_TO_ADD_ON_TARGET_POWER - powerRange); //always add 1000 to target power
			workoutStepMesg.SetCustomTargetValueHigh(value + VALUE_TO_ADD_ON_TARGET_POWER + powerRange);
		}
		else
		{
			unsigned int minValue, maxValue;
			if (data.workoutFTPValues[i][FINALFTP] > data.workoutFTPValues[i][INITIALFTP]) //if the file have an inverse ramp, fix the minimum and maximum values for garmin
			{
				minValue = data.workoutFTPValues[i][INITIALFTP];
				maxValue = data.workoutFTPValues[i][FINALFTP];
			}
			else
			{
				minValue = data.workoutFTPValues[i][FINALFTP];
				maxValue = data.workoutFTPValues[i][INITIALFTP];
			}
			FIT_UINT32 value = FIT_UINT32(minValue * 0.01 * functionalThresholdPower);
			workoutStepMesg.SetCustomTargetValueLow(value + VALUE_TO_ADD_ON_TARGET_POWER); //always add 1000 to target power

			value = FIT_UINT32(maxValue * 0.01 * functionalThresholdPower);
			workoutStepMesg.SetCustomTargetValueHigh(value + VALUE_TO_ADD_ON_TARGET_POWER);
		}
		workoutStepMesg.SetMessageIndex(i); //incremental (number of step, from 0 to n-1)
		workoutStepMesg.SetDurationType(FIT_WKT_STEP_DURATION_TIME);
		workoutStepMesg.SetTargetType(FIT_WKT_STEP_TARGET_POWER_3S);	//FIT_WKT_STEP_TARGET_POWER_3S, FIT_WKT_STEP_TARGET_POWER_10S, FIT_WKT_STEP_TARGET_POWER_30S 
		workoutStepMesg.SetIntensity(FIT_INTENSITY_ACTIVE);

		encode.Write(workoutStepMesg);
	}
}
