#include "workoutData.h"
#include <math.h>

workoutData::workoutData(unsigned int functionalThresholdPower)
{
	memset(outputFileName, NULL, sizeof(outputFileName));
	totalTime = 0;
	normalizedPower = averagePower = totalWork = intensityFactor = trainingStressScore = variabilityIndex = 0.0;
	powerBySecond = NULL;
	this->functionalThresholdPower = functionalThresholdPower;
}

workoutData::~workoutData()
{
	if (powerBySecond)
	{
		delete[] powerBySecond;
	}
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void workoutData::writeWorkoutData(workoutInfo& data, char* workoutName)
{
	calculateTotalTime(data);
	generatePowerArray(data);
	calculateWork();
	calculateAvgP();
	calculateNP();
	calculateIF();
	calculateVI();
	calculateTSS();
	fillInfo(workoutName);
}

void workoutData::createFile(char* fileName)
{
	strcpy(outputFileName, fileName);
	outputFile.open(outputFileName);
	fillHeader();
}

void workoutData::closeFile()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void workoutData::fillHeader()
{
	outputFile << "Name,IF,TSS,NP(W),Time(min),Work(kJ),AvgP(W),VI\n";
}

void workoutData::fillInfo(char* workoutName)
{
	outputFile 
		<< '"' << workoutName << '"' 
		<< "," << intensityFactor 
		<< "," << (int)trainingStressScore 
		<< "," << (int)normalizedPower 
		<< "," << totalTime/60.0 
		<< "," << (int)totalWork 
		<< "," << (int)averagePower 
		<< "," << variabilityIndex << '\n' ;
}

void workoutData::calculateNP()
{
	normalizedPower = 0.0;
	double averagePoweredSum = 0;
	for (unsigned int i = (VALUE_OF_SEC_AVG_NP-1); i < totalTime; i++)
	{
		double rollingAverage = 0;
		for (unsigned j = 0; j < VALUE_OF_SEC_AVG_NP; j++)
		{
			rollingAverage += powerBySecond[i - j];
		}
		rollingAverage = (rollingAverage / VALUE_OF_SEC_AVG_NP);
		rollingAverage = pow(rollingAverage, FOURTH_POWER);
		averagePoweredSum += rollingAverage;
	}
	averagePoweredSum = (averagePoweredSum / (totalTime - VALUE_OF_SEC_AVG_NP + 1));
	normalizedPower = (float)(pow(averagePoweredSum, FOURTH_ROOT));
}

void workoutData::calculateIF()
{
	intensityFactor = (normalizedPower / functionalThresholdPower);
}

void workoutData::calculateTSS()
{
	trainingStressScore = (totalTime * intensityFactor * intensityFactor / 36); //TSS = ((t * NP * IF) / (FTP * 3600)) * 100 according to Andrew Coggan
}

void workoutData::calculateVI()
{
	variabilityIndex = (normalizedPower / averagePower);
}

void workoutData::calculateAvgP()
{
	averagePower = 0;
	for (unsigned int i = 0; i < totalTime; i++)
	{
		averagePower += powerBySecond[i];
	}
	averagePower = (averagePower / totalTime);
}

void workoutData::calculateWork()
{
	totalWork = 0;
	for (unsigned int i = 0; i < totalTime; i++)
	{
		totalWork += powerBySecond[i];
	}
	totalWork = (totalWork / ONE_THOUSAND); //J to kJ
}

void workoutData::calculateTotalTime(workoutInfo& data)
{
	totalTime = 0;
	for (unsigned int i = 0; i < data.numberOfSteps; i++)
	{
		totalTime += (unsigned int)round(data.workoutTimeValue[i] * ONE_MINUTE_IN_SECONDS);
	}
}

void workoutData::generatePowerArray(workoutInfo& data)
{
	if (powerBySecond)
	{
		delete[] powerBySecond;
	}
	powerBySecond = new unsigned int[totalTime];
	unsigned int currentWorkoutTime = 0;

	for (unsigned int i = 0; i < data.numberOfSteps; i++)
	{
		double stepTimeInSeconds = data.workoutTimeValue[i] * ONE_MINUTE_IN_SECONDS;
		unsigned int stepTimeRounded = (unsigned int)round(stepTimeInSeconds);

		// Ensure we do not write past the end of powerBySecond
		if (currentWorkoutTime + stepTimeRounded > totalTime)
		{
			stepTimeRounded = totalTime > currentWorkoutTime ? totalTime - currentWorkoutTime : 0;
		}

		for (unsigned int j = 0; j < stepTimeRounded; j++)
		{
			if (data.workoutFTPValues[i][INITIALFTP] == data.workoutFTPValues[i][FINALFTP])
			{
				powerBySecond[currentWorkoutTime + j] = (unsigned int)round(data.workoutFTPValues[i][INITIALFTP] * functionalThresholdPower / ONE_CENTURY);
			}
			else
			{
				int diff = (data.workoutFTPValues[i][FINALFTP] - data.workoutFTPValues[i][INITIALFTP]);
				double ramp = ((j + 1.0) / (stepTimeInSeconds));
				int rampRate = (int)(diff * ramp);
				powerBySecond[currentWorkoutTime + j] = (unsigned int)round((data.workoutFTPValues[i][INITIALFTP] + rampRate) * functionalThresholdPower / ONE_CENTURY);
			}
		}
		currentWorkoutTime += stepTimeRounded;
	}
}