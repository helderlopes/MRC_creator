#include "writeGeneric.h"
#include <shlwapi.h>

string removeFilePathAndExtension(char* filePath)
{
	string fileName = filePath;
	fileName = fileName.substr(fileName.find_last_of("/\\") + 1);
	return fileName;
}

writeGeneric::writeGeneric()
{
	memset(outputFileName, NULL, sizeof(outputFileName));
}

writeGeneric::~writeGeneric()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void writeGeneric::createFile(char* fileName)
{
	strcpy(outputFileName, fileName);
	outputFile.open(outputFileName);
}

void writeGeneric::closeFile()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}
