#include "workoutData.h"
#include <math.h>

workoutData::workoutData()
{
	totalTime = 0;
	normalizedPower = averagePower = totalWork = intensityFactor = trainingStressScore = variabilityIndex = 0.0;
	powerBySecond = NULL;
}

workoutData::~workoutData()
{
	if (powerBySecond)
	{
		delete[] powerBySecond;
	}
}

void workoutData::writeWorkoutData(workoutInfo& data)
{
	calculateTotalTime(data);
	generatePowerArray(data);
	calculateWork();
	calculateAvgP();
	calculateNP();
	calculateIF();
	calculateVI();
	calculateTSS();
}

void workoutData::calculateNP()
{
	normalizedPower = 0.0;
	float averagePoweredSum = 0;
	for (unsigned int i = (VALUE_OF_SEC_AVG_NP-1); i < totalTime; i++)
	{
		float rollingAverage = 0;
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
	intensityFactor = (normalizedPower / FTP);
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
		totalTime += (unsigned int)(data.workoutTimeValue[i] * ONE_MINUTE_IN_SECONDS);
	}
}

void workoutData::generatePowerArray(workoutInfo& data)
{
	powerBySecond = new unsigned int[totalTime];
	unsigned int currentWorkoutTime = 0;

	for (unsigned int i = 0; i < data.numberOfSteps; i++)
	{
		for (unsigned int j = 0; j < (unsigned int)(data.workoutTimeValue[i] * ONE_MINUTE_IN_SECONDS); j++)
		{
			powerBySecond[currentWorkoutTime + j] = (unsigned int) (data.workoutFTPValues[i][INITIALFTP] * FTP / ONE_CENTURY);
		}
		currentWorkoutTime += (unsigned int)(data.workoutTimeValue[i] * ONE_MINUTE_IN_SECONDS);
	}
}
