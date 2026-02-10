#pragma once
#include "readFile.h"

#include <string>

#define SIZE_OF_FILE_EXTENSION 4

std::wstring removeFilePathAndExtension(const std::wstring& filePath);

class writeGeneric
{
public:
	writeGeneric() = default;
	~writeGeneric();
	void createFile(std::wstring fileName);
	void closeFile();
	virtual void fillFile(workoutInfo& data) = 0;

protected:
	virtual void fillHeader() = 0;
	virtual void fillCourse(workoutInfo& data) = 0;

	std::wofstream outputFile;
	std::wstring _outputFileName;
};
