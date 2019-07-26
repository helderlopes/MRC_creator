#pragma once
#include "readFile.h"

class writeMRC
{
public:
	writeMRC();
	~writeMRC();
	void createFile(char* fileName);
	void closeFile();
	void fillFile(workoutInfo &data);

private:
	void fillHeader();
	void fillCourse(workoutInfo& data);

	ofstream outputFile;
	char outputFileName[_MAX_PATH];
};
