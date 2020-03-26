#pragma once
#include "readFile.h"

#define SIZE_OF_FILE_EXTENSION 4

class writeZWO
{
public:
	writeZWO();
	~writeZWO();
	void createFile(char* fileName);
	void closeFile();
	void fillFile(workoutInfo& data);

private:
	void fillHeader();
	void fillCourse(workoutInfo& data);

	ofstream outputFile;
	char outputFileName[_MAX_PATH];
};
