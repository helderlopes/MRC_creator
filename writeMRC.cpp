#include "writeMRC.h"

writeMRC::writeMRC()
{
	memset(outputFileName, NULL, sizeof(outputFileName));
}

writeMRC::~writeMRC()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void writeMRC::createFile(char* fileName)
{
	strcpy(outputFileName, fileName);
	outputFile.open(outputFileName);
}

void writeMRC::closeFile()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void writeMRC::fillHeader()
{
	outputFile << "[COURSE HEADER]\n";
	outputFile << "VERSION = 2\n";
	outputFile << "UNITS = ENGLISH\n";
	outputFile << "DESCRIPTION = A description\n";
	outputFile << "FILE NAME = " << outputFileName << "\n";
	outputFile << "MINUTES PERCENT\n";
	outputFile << "[END COURSE HEADER]\n";
}

void writeMRC::fillCourse(workoutInfo& data)
{
	double workoutTotalTime = 0.0;

	outputFile << "[COURSE DATA]\n";

	for (unsigned int i = 0; i < data.numberOfSteps; i++) 
	{
		outputFile << workoutTotalTime << " " << data.workoutFTPValues[i][INITIALFTP] << '\n';	
		workoutTotalTime += data.workoutTimeValue[i];											//course data format:	initial time	initial ftp value
		outputFile << workoutTotalTime << " LAP\n";												//						final time		LAP
		outputFile << workoutTotalTime << " " << data.workoutFTPValues[i][FINALFTP] << '\n';	//						final time		final ftp value

	}

	outputFile << "[END COURSE DATA]\n";
}

void writeMRC::fillFile(workoutInfo& data)
{
	if (outputFile.is_open())
	{
		fillHeader();
		fillCourse(data);
	}
}