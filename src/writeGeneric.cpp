#include "writeGeneric.h"
#include <shlwapi.h>
#include <filesystem>

std::wstring removeFilePathAndExtension(const std::wstring& filePath)
{
	std::filesystem::path path(filePath);

	return path.stem().wstring();
}

writeGeneric::writeGeneric(const std::wstring& fileName) : _outputFileName(fileName)
{
}

writeGeneric::~writeGeneric()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}

void writeGeneric::createFile()
{
	outputFile.open(_outputFileName);
}

void writeGeneric::closeFile()
{
	if (outputFile.is_open())
	{
		outputFile.close();
	}
}
