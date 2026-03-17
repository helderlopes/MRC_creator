#include "writeERG.h"

writeERG::writeERG(const std::wstring& fileName, std::vector<WorkoutStep>& workoutSteps, unsigned int functionalThresholdPower) :
	writeGeneric(fileName), workoutSteps(workoutSteps), functionalThresholdPower(functionalThresholdPower), hasAnyDescritpion(false)
{
}

void writeERG::fillHeader()
{
	outputFile << "[COURSE HEADER]\n";
	outputFile << "VERSION = 2\n";
	outputFile << "UNITS = ENGLISH\n";
	outputFile << "DESCRIPTION = A description\n";
	outputFile << "FILE NAME = " << removeFilePathAndExtension(_outputFileName) << "\n";
	outputFile << "FTP = " << functionalThresholdPower << "\n";
	outputFile << "MINUTES WATTS\n";
	outputFile << "[END COURSE HEADER]\n";
}

void writeERG::fillCourse()
{
	double workoutTotalTime = 0.0;

	outputFile << "[COURSE DATA]\n";

	for (const auto& workoutStep : workoutSteps)
	{
		if (!workoutStep.stepDescription.empty())
		{
			hasAnyDescritpion = true;
			descriptionsTime.push_back(workoutTotalTime * 60.0);
		}

		outputFile << workoutTotalTime << " " << (workoutStep.workoutFTPValues[INITIALFTP] * functionalThresholdPower / 100) << '\n';
		workoutTotalTime += workoutStep.workoutTimeValue;																			//course data format:	initial time	initial ftp value
		outputFile << workoutTotalTime << " " << (workoutStep.workoutFTPValues[FINALFTP] * functionalThresholdPower / 100) << '\n';	//						final time		final ftp value

	}

	outputFile << "[END COURSE DATA]\n";
}

void writeERG::fillDescription()
{
	if (hasAnyDescritpion)
	{
		int i = 0;
		outputFile << "[COURSE TEXT]\n";

		for (const auto& workoutStep : workoutSteps)
		{
			if (!workoutStep.stepDescription.empty())
			{
				outputFile << descriptionsTime[i++] << '\t' << workoutStep.stepDescription << '\t' << "10" << '\n';
			}
			
		}

		outputFile << "[END COURSE TEXT]\n";
	}
}

void writeERG::fillFile()
{
	if (outputFile.is_open())
	{
		fillHeader();
		fillCourse();
		fillDescription();
	}
}