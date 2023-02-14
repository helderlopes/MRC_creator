#include "writeMRC.h"

void writeMRC::fillFile(workoutInfo& data)
{
	if (outputFile.is_open())
	{
		fillHeader();
		fillCourse(data);
		fillDescription(data);
	}
}

void writeMRC::fillHeader()
{
	outputFile << "[COURSE HEADER]\n";
	outputFile << "VERSION = 2\n";
	outputFile << "UNITS = ENGLISH\n";
	outputFile << "DESCRIPTION = A description\n";
	outputFile << "FILE NAME = " << removeFilePathAndExtension(outputFileName) << "\n";
	outputFile << "MINUTES PERCENT\n";
	outputFile << "[END COURSE HEADER]\n";
}

void writeMRC::fillCourse(workoutInfo& data)
{
	double workoutTotalTime = 0.0;

	outputFile << "[COURSE DATA]\n";

	unsigned int j = 0;
	for (unsigned int i = 0; i < data.numberOfSteps; i++) 
	{
		if (data.numberOfDescriptions > 0 && data.stepDescription[i] != "")
		{
			descriptionsTime[j++] = workoutTotalTime * 60.0;
		}

		outputFile << workoutTotalTime << " " << data.workoutFTPValues[i][INITIALFTP] << '\n';	
		workoutTotalTime += data.workoutTimeValue[i];											//course data format:	initial time	initial ftp value
		outputFile << workoutTotalTime << " LAP\n";												//						final time		LAP
		outputFile << workoutTotalTime << " " << data.workoutFTPValues[i][FINALFTP] << '\n';	//						final time		final ftp value

	}

	outputFile << "[END COURSE DATA]\n";
}

void writeMRC::fillDescription(workoutInfo& data)
{
	if (data.numberOfDescriptions > 0)
	{
		outputFile << "[COURSE TEXT]\n";

		unsigned int j = 0;
		for (unsigned int i = 0; i < data.numberOfSteps; i++)
		{
			if (data.stepDescription[i] != "")
			{
				outputFile << descriptionsTime[j++] << '\t' << data.stepDescription[i] << '\t' << "10" << '\n';
			}
		}

		outputFile << "[END COURSE TEXT]\n";
	}
}
