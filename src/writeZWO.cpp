#include "writeZWO.h"

void writeZWO::fillHeader()
{
	outputFile << "<workout_file>\n";
	outputFile << "\t<author></author>\n";
	outputFile << "\t<name>" << removeFilePathAndExtension(_outputFileName) <<"</name>\n";
	outputFile << "\t<description></description>\n";
	outputFile << "\t<sportType>bike</sportType>\n"; 
	outputFile << "\t<tags></tags>\n";
}

void writeZWO::fillCourse(workoutInfo& data)
{
	outputFile << "\t<workout>\n";

	for (unsigned int i = 0; i < data.numberOfSteps; i++)
	{
		std::wstring intervalType;
		if (data.workoutFTPValues[i][INITIALFTP] == data.workoutFTPValues[i][FINALFTP])
		{
			outputFile << "\t\t<SteadyState Duration=\"" << (int)round(data.workoutTimeValue[i]*60) << "\" Power=\"" << (data.workoutFTPValues[i][INITIALFTP]/100.0) << "\"" ;
			intervalType = L"SteadyState";
		}
		else if (data.workoutFTPValues[i][INITIALFTP] < data.workoutFTPValues[i][FINALFTP])
		{
			outputFile << "\t\t<Ramp Duration=\"" << (int)round(data.workoutTimeValue[i] * 60) << "\" PowerLow=\"" << (data.workoutFTPValues[i][INITIALFTP] / 100.0) << "\" PowerHigh=\"" << (data.workoutFTPValues[i][FINALFTP] / 100.0) << "\"";
			intervalType = L"Ramp";
		}
		else // data.workoutFTPValues[i][INITIALFTP] > data.workoutFTPValues[i][FINALFTP]
		{
			outputFile << "\t\t<CoolDown Duration=\"" << (int)round(data.workoutTimeValue[i] * 60) << "\" PowerLow=\"" << (data.workoutFTPValues[i][INITIALFTP] / 100.0) << "\" PowerHigh=\"" << (data.workoutFTPValues[i][FINALFTP] / 100.0) << "\"";
			intervalType = L"CoolDown";
		}

		//if there's a description, put it inside the tag
		if (data.stepDescription[i] != L"")
		{
			outputFile << ">\n";
			outputFile << "\t\t\t<textevent timeoffset=\"0\" message=\"" << data.stepDescription[i] << "\"/>\n";
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

void writeZWO::fillFile(workoutInfo& data)
{
	if (outputFile.is_open())
	{
		fillHeader();
		fillCourse(data);
	}
}