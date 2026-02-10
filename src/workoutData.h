#pragma once
#include "writeFIT.h"

#define ONE_MINUTE_IN_SECONDS 60
#define ONE_THOUSAND 1000
#define ONE_CENTURY 100.0
#define VALUE_OF_SEC_AVG_NP 30
#define FOURTH_POWER 4
#define FOURTH_ROOT 0.25

class workoutData
{
public:
	workoutData(unsigned int functionalThresholdPower);
	~workoutData();
	void WriteWorkoutData(workoutInfo& data, std::wstring workoutName);
	void createFile(std::wstring fileName);
	void closeFile();

private:
	void fillHeader();
	void fillInfo(std::wstring workoutName);
	void calculateNP();
	void calculateIF();
	void calculateTSS();
	void calculateVI();
	void calculateAvgP();
	void calculateWork();
	void calculateTotalTime(workoutInfo& data);
	void generatePowerArray(workoutInfo& data);

	unsigned int functionalThresholdPower;
	float normalizedPower; //NP in Watts
	float intensityFactor; //IF
	float trainingStressScore; //TSS 
	float variabilityIndex; //VI 
	float averagePower; //avgP in Watts
	float totalWork; //total Work in kJ
	unsigned int totalTime; //time in seconds
	unsigned int *powerBySecond; //array with power divided second by second

	std::wofstream outputFile;
	std::wstring outputFileName;
};
