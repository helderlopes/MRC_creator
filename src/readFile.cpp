#include "readFile.h"

static std::wstring CheckQuotesAndGenerateDescription(const std::wstring& str)
{
	const wchar_t* startPos = wcschr(str.c_str(), L'"');
	if (startPos != nullptr)
	{
		std::wstring res(startPos);
		res.pop_back();
		res.erase(0, 1);
		return res;
	}
	return L"";
}

readFile::readFile(std::wstring fileName) : fileName(fileName)
{
}

readFile::~readFile()
{
	if (inputFile.is_open())
	{
		inputFile.close();
	}
}

void readFile::openFile()
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
	std::wstring currentLine;
	wchar_t *pValue;
	if (inputFile.is_open())
	{
		while (std::getline(inputFile, currentLine))
		{
			WorkoutStep workoutStep;
			//check if there's a workout description
			workoutStep.stepDescription = CheckQuotesAndGenerateDescription(currentLine.c_str());

			//get step time
			pValue = _wcstok(const_cast<wchar_t*>(currentLine.c_str()), L"\t ,;");
			workoutStep.workoutTimeValue = _wtof(pValue);

			//get step min FTP
			pValue = wcstok(nullptr, L"\t ,;");
			workoutStep.workoutFTPValues[INITIALFTP] = _wtoi(pValue);

			//get step max FTP
			pValue = wcstok(nullptr, L"\t ,;");
			if (pValue) //if there's a third value, the step is a ramp
			{
				workoutStep.workoutFTPValues[FINALFTP] = _wtoi(pValue);
			}
			else //else, the step have a target ftp, so final ftp = initial ftp
			{
				workoutStep.workoutFTPValues[FINALFTP] = workoutStep.workoutFTPValues[INITIALFTP];
			}

			workoutSteps.push_back(workoutStep);
		}
	}
}
