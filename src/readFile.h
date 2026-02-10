#pragma once

#define _CRT_NON_CONFORMING_WCSTOK 

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

#define  ROWSIZE 1024

enum Column
{
	INITIALFTP = 0,
	FINALFTP,
	COLUMNSIZE = 2
};

struct workoutInfo
{
	unsigned int	numberOfSteps{};
	unsigned int	numberOfDescriptions{};
	unsigned int	workoutFTPValues[ROWSIZE][COLUMNSIZE]{};
	double			workoutTimeValue[ROWSIZE]{};
	std::wstring	stepDescription[ROWSIZE]{};
};

class readFile
{
public:
	readFile();
	~readFile();
	void openFile(std::wstring fileName);
	void closeFile();
	void fillData();

	workoutInfo data;
private:
	std::wifstream inputFile;
};
