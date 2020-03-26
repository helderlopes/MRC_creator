#pragma once
#include "readFile.h"

class writeERG
{
public:
	writeERG(unsigned int functionalThresholdPower);
	~writeERG();
	void createFile(char* fileName);
	void closeFile();
	void fillFile(workoutInfo& data);

private:
	void fillHeader();
	void fillCourse(workoutInfo& data);

	unsigned int functionalThresholdPower;
	ofstream outputFile;
	char outputFileName[_MAX_PATH];
};
