#pragma once
#include "readFile.h"

#define SIZE_OF_FILE_EXTENSION 4

string removeFilePathAndExtension(char* filePath);

class writeGeneric
{
public:
	writeGeneric();
	~writeGeneric();
	void createFile(char* fileName);
	void closeFile();
	virtual void fillFile(workoutInfo& data) = 0;

protected:
	virtual void fillHeader() = 0;
	virtual void fillCourse(workoutInfo& data) = 0;

	ofstream outputFile;
	char outputFileName[_MAX_PATH];
};
