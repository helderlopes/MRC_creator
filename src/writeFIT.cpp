#include "writeFIT.h"
#include "Windows.h"
#include <functional>
#include "shlwapi.h"

static std::wstring s2ws(const std::string& str)
{
	return std::wstring(str.begin(), str.end());
}

writeFIT::writeFIT(const std::wstring& fileName, std::vector<WorkoutStep>& workoutSteps, unsigned int functionalThresholdPower, unsigned int powerRange)
	: encode(fit::ProtocolVersion::V20), _outputFileName(fileName), functionalThresholdPower(functionalThresholdPower), powerRange(powerRange), hasAnyDescritpion(false), workoutSteps(workoutSteps)
{
}

writeFIT::~writeFIT()
{
	if (outputFile.is_open())
	{
		encode.Close();
		outputFile.close();
	}
}

void writeFIT::createFile()
{
	outputFile.open(_outputFileName, std::ios::in | std::ios::out | std::ios::binary | std::ios::trunc);
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

void writeFIT::fillFile()
{
	fillFileId();

	//fillFileCreator();
	
	fillWorkout();
	
	fillWorkoutSteps();
}

void writeFIT::fillFileId()
{
	fit::FileIdMesg fileIdMesg; // Every FIT file requires a File ID message
	fileIdMesg.SetType(FIT_FILE_WORKOUT);
	fileIdMesg.SetManufacturer(FIT_MANUFACTURER_GARMIN);
	//fileIdMesg.SetProduct(65534); //65534 = Garmin Edge 520
	//fileIdMesg.SetSerialNumber(128779944); //My Serial Number
	//fileIdMesg.SetTimeCreated(915630319); //A random created time
	fileIdMesg.SetNumber((FIT_UINT16)std::hash<std::wstring>{}(_outputFileName)); //creating a hash from based on file name to be used as a unique identifier

	encode.Write(fileIdMesg);

}

void writeFIT::fillFileCreator()
{
	fit::FileCreatorMesg fileCreatorMesg;
	fileCreatorMesg.SetSoftwareVersion(0);
	fileCreatorMesg.SetHardwareVersion(0);

	encode.Write(fileCreatorMesg);
}

void writeFIT::fillWorkout()
{
	FIT_UINT16 numValidSteps = static_cast<FIT_UINT16>(workoutSteps.size());

	fit::WorkoutMesg workoutMesg;
	wchar_t workoutName[_MAX_PATH];
	std::wstring fileName = _outputFileName;
	fileName = fileName.substr(fileName.find_last_of(L"/\\") + 1);
	wcscpy(workoutName, fileName.c_str());
	workoutName[wcslen(workoutName) - SIZE_OF_FILE_EXTENSION] = '\0';

	workoutMesg.SetCapabilities(FIT_WORKOUT_CAPABILITIES_TCX);
	workoutMesg.SetNumValidSteps(numValidSteps); //THIS IS THE NUMBER OF STEPS
	workoutMesg.SetSport(FIT_SPORT_CYCLING);
	workoutMesg.SetWktName(workoutName);
	encode.Write(workoutMesg);
}

void writeFIT::fillWorkoutSteps()
{
	int i = 0;
	for (const auto& workoustStep : workoutSteps)
	{
		fit::WorkoutStepMesg workoutStepMesg;
		workoutStepMesg.SetDurationValue(FIT_UINT32(round(workoustStep.workoutTimeValue * 60)) * 1000); //step time in ms
		workoutStepMesg.SetTargetValue(0);
		if (workoustStep.workoutFTPValues[INITIALFTP] == workoustStep.workoutFTPValues[FINALFTP])
		{
			FIT_UINT32 value = FIT_UINT32(workoustStep.workoutFTPValues[INITIALFTP] * 0.01 * functionalThresholdPower);
			workoutStepMesg.SetCustomTargetValueLow(value + FIT_WORKOUT_POWER_WATTS_OFFSET - powerRange); //always add 1000 to target power
			workoutStepMesg.SetCustomTargetValueHigh(value + FIT_WORKOUT_POWER_WATTS_OFFSET + powerRange);
		}
		else
		{
			unsigned int minValue, maxValue;
			if (workoustStep.workoutFTPValues[FINALFTP] > workoustStep.workoutFTPValues[INITIALFTP]) //if the file have an inverse ramp, fix the minimum and maximum values for garmin
			{
				minValue = workoustStep.workoutFTPValues[INITIALFTP];
				maxValue = workoustStep.workoutFTPValues[FINALFTP];
			}
			else
			{
				minValue = workoustStep.workoutFTPValues[FINALFTP];
				maxValue = workoustStep.workoutFTPValues[INITIALFTP];
			}
			FIT_UINT32 value = FIT_UINT32(minValue * 0.01 * functionalThresholdPower);
			workoutStepMesg.SetCustomTargetValueLow(value + FIT_WORKOUT_POWER_WATTS_OFFSET); //always add 1000 to target power

			value = FIT_UINT32(maxValue * 0.01 * functionalThresholdPower);
			workoutStepMesg.SetCustomTargetValueHigh(value + FIT_WORKOUT_POWER_WATTS_OFFSET);
		}
		if (!workoustStep.stepDescription.empty())
		{
			workoutStepMesg.SetNotes(workoustStep.stepDescription);
		}

		workoutStepMesg.SetMessageIndex(i++); //incremental (number of step, from 0 to n-1)
		workoutStepMesg.SetDurationType(FIT_WKT_STEP_DURATION_TIME);
		workoutStepMesg.SetTargetType(FIT_WKT_STEP_TARGET_POWER_3S);	//FIT_WKT_STEP_TARGET_POWER_3S, FIT_WKT_STEP_TARGET_POWER_10S, FIT_WKT_STEP_TARGET_POWER_30S 
		workoutStepMesg.SetIntensity(FIT_INTENSITY_ACTIVE);

		encode.Write(workoutStepMesg);
	}
}
