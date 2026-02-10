#include "readFile.h"

static std::wstring CheckQuotesAndGenerateDescription(wchar_t* str)
{
	wchar_t* startPos = wcschr(str, L'"');
	if (startPos != nullptr)
	{
		std::wstring res(startPos);
		res.pop_back();
		res.erase(0, 1);
		return res;
	}
	return L"";
}

readFile::readFile()
{
	data.numberOfSteps = 0;
	data.numberOfDescriptions = 0;
}

readFile::~readFile()
{
	if (inputFile.is_open())
	{
		inputFile.close();
	}
}

void readFile::openFile(std::wstring fileName)
{
	inputFile.open(fileName);
}

void readFile::closeFile()
{
	if (inputFile.is_open())
	{
		inputFile.close();
	}
}

void readFile::fillData()
{
	wchar_t curLine[512];
	wchar_t *pValue;
	if (inputFile.is_open())
	{
		while (inputFile.getline(curLine, 512))
		{
			//check if there's a workout description
			data.stepDescription[data.numberOfSteps] = CheckQuotesAndGenerateDescription(&curLine[0]);
			if (data.stepDescription[data.numberOfSteps] != L"")
			{
				data.numberOfDescriptions++;
			}

			//get step time
			pValue = _wcstok(curLine, L"\t ,;");
			data.workoutTimeValue[data.numberOfSteps] = _wtof(pValue);

			//get step min FTP
			pValue = wcstok(nullptr, L"\t ,;");
			data.workoutFTPValues[data.numberOfSteps][INITIALFTP] = _wtoi(pValue);

			//get step max FTP
			pValue = wcstok(nullptr, L"\t ,;");
			if (pValue) //if there's a third value, the step is a ramp
			{
				data.workoutFTPValues[data.numberOfSteps][FINALFTP] = _wtoi(pValue);
			}
			else //else, the step have a target ftp, so final ftp = initial ftp
			{
				data.workoutFTPValues[data.numberOfSteps][FINALFTP] = data.workoutFTPValues[data.numberOfSteps][INITIALFTP];
			}

			data.numberOfSteps++;
		}
	}
}
