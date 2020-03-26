#include "writeZWO.h"

writeZWO::writeZWO()
{
	memset(outputFileName, NULL, sizeof(outputFileName));
}

writeZWO::~writeZWO()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void writeZWO::createFile(char* fileName)
{
	strcpy(outputFileName, fileName);
	outputFile.open(outputFileName);
}

void writeZWO::closeFile()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void writeZWO::fillHeader()
{
	char workoutName[_MAX_PATH];
	string fileName = outputFileName;
	fileName = fileName.substr(fileName.find_last_of("/\\") + 1);
	strcpy(workoutName, fileName.c_str());
	workoutName[strlen(workoutName) - SIZE_OF_FILE_EXTENSION] = '\0';

	outputFile << "<workout_file>\n";
	outputFile << "\t<author></author>\n";
	outputFile << "\t<name>" << workoutName <<"</name>\n";
	outputFile << "\t<description></description>\n";
	outputFile << "\t<sportType>bike</sportType>\n"; 
	outputFile << "\t<tags></tags>\n";
}

void writeZWO::fillCourse(workoutInfo& data)
{
	double workoutTotalTime = 0.0;

	outputFile << "\t<workout>\n";

	for (unsigned int i = 0; i < data.numberOfSteps; i++)
	{
		if (data.workoutFTPValues[i][INITIALFTP] == data.workoutFTPValues[i][FINALFTP])
		{
			outputFile << "\t\t<SteadyState Duration=\"" << (int)(data.workoutTimeValue[i]*60) << "\" Power=\"" << (data.workoutFTPValues[i][INITIALFTP]/100.0) << "\"/>\n";
		}
		else if (data.workoutFTPValues[i][INITIALFTP] < data.workoutFTPValues[i][FINALFTP])
		{
			outputFile << "\t\t<Ramp Duration=\"" << (int)(data.workoutTimeValue[i] * 60) << "\" PowerLow=\"" << (data.workoutFTPValues[i][INITIALFTP] / 100.0) << "\" PowerHigh=\"" << (data.workoutFTPValues[i][FINALFTP] / 100.0) << "\"/>\n";
		}
		else // data.workoutFTPValues[i][INITIALFTP] > data.workoutFTPValues[i][FINALFTP]
		{
			outputFile << "\t\t<CoolDown Duration=\"" << (int)(data.workoutTimeValue[i] * 60) << "\" PowerLow=\"" << (data.workoutFTPValues[i][INITIALFTP] / 100.0) << "\" PowerHigh=\"" << (data.workoutFTPValues[i][FINALFTP] / 100.0) << "\"/>\n";
		}
	}

	outputFile << "\t</workout>\n";
	outputFile << "</workout_file>\n";
}

void writeZWO::fillFile(workoutInfo& data)
{
	if (outputFile.is_open())
	{
		fillHeader();
		fillCourse(data);
	}
}