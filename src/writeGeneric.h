#pragma once
#include "readFile.h"

#include <string>

std::wstring removeFilePathAndExtension(const std::wstring& filePath);

class writeGeneric
{
public:
	writeGeneric(const std::wstring& fileName);
	~writeGeneric();
	void createFile();
	void closeFile();
	virtual void fillFile() = 0;

protected:
	virtual void fillHeader() = 0;
	virtual void fillCourse() = 0;

	std::wofstream outputFile;
	std::wstring _outputFileName;
};
