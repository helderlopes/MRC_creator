#include "writeERG.h"

writeERG::writeERG(unsigned int functionalThresholdPower)
{
	memset(outputFileName, NULL, sizeof(outputFileName));
	this->functionalThresholdPower = functionalThresholdPower;
}

writeERG::~writeERG()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void writeERG::createFile(char* fileName)
{
	strcpy(outputFileName, fileName);
	outputFile.open(outputFileName);
}

void writeERG::closeFile()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void writeERG::fillHeader()
{
	outputFile << "[COURSE HEADER]\n";
	outputFile << "VERSION = 2\n";
	outputFile << "UNITS = ENGLISH\n";
	outputFile << "DESCRIPTION = A description\n";
	outputFile << "FILE NAME = " << outputFileName << "\n";
	outputFile << "FTP = " << functionalThresholdPower << "\n";
	outputFile << "MINUTES WATTS\n";
	outputFile << "[END COURSE HEADER]\n";
}

void writeERG::fillCourse(workoutInfo& data)
{
	double workoutTotalTime = 0.0;

	outputFile << "[COURSE DATA]\n";

	for (unsigned int i = 0; i < data.numberOfSteps; i++)
	{
		outputFile << workoutTotalTime << " " << (data.workoutFTPValues[i][INITIALFTP] * functionalThresholdPower / 100.0) << '\n';
		workoutTotalTime += data.workoutTimeValue[i];											//course data format:	initial time	initial ftp value
		//outputFile << workoutTotalTime << " LAP\n";												//						final time		LAP
		outputFile << workoutTotalTime << " " << (data.workoutFTPValues[i][FINALFTP] * functionalThresholdPower / 100.0) << '\n';	//						final time		final ftp value

	}

	outputFile << "[END COURSE DATA]\n";
}

void writeERG::fillFile(workoutInfo& data)
{
	if (outputFile.is_open())
	{
		fillHeader();
		fillCourse(data);
	}
}