#include "readFile.h"



readFile::readFile()
{
	memset((void*)& data, 0, sizeof(workoutInfo));
}


readFile::~readFile()
{
	if (inputFile.is_open())
	{
		inputFile.close();
	}
}

void readFile::openFile(char* fileName)
{
	inputFile.open(fileName);
}

void readFile::closeFile()
{
	if (inputFile.is_open())
	{
		inputFile.close();
	}
}

void readFile::fillData()
{
	char curLine[256];
	char *pValue;
	if (inputFile.is_open())
	{
		while (inputFile.getline(curLine, 256))
		{
			//get step time
			pValue = strtok(curLine, "\t ,;");
			data.workoutTimeValue[data.numberOfSteps] = atof(pValue);

			//get step min FTP
			pValue = strtok(NULL, "\t ,;");
			data.workoutFTPValues[data.numberOfSteps][INITIALFTP] = atoi(pValue);

			//get step max FTP
			pValue = strtok(NULL, "\t ,;");
			if (pValue) //if there's a third value, the step is a ramp
			{
				data.workoutFTPValues[data.numberOfSteps][FINALFTP] = atoi(pValue);
			}
			else //else, the step have a target ftp, so final ftp = initial ftp
			{
				data.workoutFTPValues[data.numberOfSteps][FINALFTP] = data.workoutFTPValues[data.numberOfSteps][INITIALFTP];
			}
			data.numberOfSteps++;
		}
	}
}
