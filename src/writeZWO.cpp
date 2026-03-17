#include "writeZWO.h"

writeZWO::writeZWO(const std::wstring& fileName, std::vector<WorkoutStep>& workoutSteps) : writeGeneric(fileName), workoutSteps(workoutSteps), hasAnyDescritpion(false)
{
}

void writeZWO::fillHeader()
{
	outputFile << "<workout_file>\n";
	outputFile << "\t<author></author>\n";
	outputFile << "\t<name>" << removeFilePathAndExtension(_outputFileName) <<"</name>\n";
	outputFile << "\t<description></description>\n";
	outputFile << "\t<sportType>bike</sportType>\n"; 
	outputFile << "\t<tags></tags>\n";
}

void writeZWO::fillCourse()
{
	outputFile << "\t<workout>\n";

	for (const auto& workoutStep : workoutSteps)
	{
		std::wstring intervalType;
		if (workoutStep.workoutFTPValues[INITIALFTP] == workoutStep.workoutFTPValues[FINALFTP])
		{
			outputFile << "\t\t<SteadyState Duration=\"" << (int)round(workoutStep.workoutTimeValue * 60) << "\" Power=\"" << (workoutStep.workoutFTPValues[INITIALFTP]/100.0) << "\"" ;
			intervalType = L"SteadyState";
		}
		else if (workoutStep.workoutFTPValues[INITIALFTP] < workoutStep.workoutFTPValues[FINALFTP])
		{
			outputFile << "\t\t<Ramp Duration=\"" << (int)round(workoutStep.workoutTimeValue * 60) << "\" PowerLow=\"" << (workoutStep.workoutFTPValues[INITIALFTP] / 100.0) << "\" PowerHigh=\"" << (workoutStep.workoutFTPValues[FINALFTP] / 100.0) << "\"";
			intervalType = L"Ramp";
		}
		else // data.workoutFTPValues[i][INITIALFTP] > data.workoutFTPValues[i][FINALFTP]
		{
			outputFile << "\t\t<CoolDown Duration=\"" << (int)round(workoutStep.workoutTimeValue * 60) << "\" PowerLow=\"" << (workoutStep.workoutFTPValues[INITIALFTP] / 100.0) << "\" PowerHigh=\"" << (workoutStep.workoutFTPValues[FINALFTP] / 100.0) << "\"";
			intervalType = L"CoolDown";
		}

		//if there's a description, put it inside the tag
		if (!workoutStep.stepDescription.empty())
		{
			outputFile << ">\n";
			outputFile << "\t\t\t<textevent timeoffset=\"0\" message=\"" << workoutStep.stepDescription << "\"/>\n";
			outputFile << "\t\t</" << intervalType << ">\n";
		}
		else //otherwise just close the tag
		{
			outputFile << "/>\n";
		}
	}

	outputFile << "\t</workout>\n";
	outputFile << "</workout_file>\n";
}

void writeZWO::fillFile()
{
	if (outputFile.is_open())
	{
		fillHeader();
		fillCourse();
	}
}