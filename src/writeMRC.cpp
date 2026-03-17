#include "writeMRC.h"

writeMRC::writeMRC(const std::wstring& fileName, std::vector<WorkoutStep>& workoutSteps) : writeGeneric(fileName), workoutSteps(workoutSteps), hasAnyDescritpion(false)
{
}

void writeMRC::fillFile()
{
	if (outputFile.is_open())
	{
		fillHeader();
		fillCourse();
		fillDescription();
	}
}

void writeMRC::fillHeader()
{
	outputFile << "[COURSE HEADER]\n";
	outputFile << "VERSION = 2\n";
	outputFile << "UNITS = ENGLISH\n";
	outputFile << "DESCRIPTION = A description\n";
	outputFile << "FILE NAME = " << removeFilePathAndExtension(_outputFileName) << "\n";
	outputFile << "MINUTES PERCENT\n";
	outputFile << "[END COURSE HEADER]\n";
}

void writeMRC::fillCourse()
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

		outputFile << workoutTotalTime << " " << workoutStep.workoutFTPValues[INITIALFTP] << '\n';
		workoutTotalTime += workoutStep.workoutTimeValue;											//course data format:	initial time	initial ftp value
		outputFile << workoutTotalTime << " LAP\n";													//						final time		LAP
		outputFile << workoutTotalTime << " " << workoutStep.workoutFTPValues[FINALFTP] << '\n';	//						final time		final ftp value

	}

	outputFile << "[END COURSE DATA]\n";
}

void writeMRC::fillDescription()
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
