#pragma once

#define _CRT_NON_CONFORMING_WCSTOK 

#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

enum Column
{
	INITIALFTP = 0,
	FINALFTP,
	COLUMNSIZE = 2
};

struct WorkoutStep
{
	unsigned int	workoutFTPValues[COLUMNSIZE] = {0};
	double			workoutTimeValue = 0.0;
	std::wstring	stepDescription;
};

class readFile
{
private:
	std::wstring fileName;
	std::wifstream inputFile;

public:
	readFile(std::wstring fileName);
	~readFile();
	void openFile();
	void closeFile();
	void fillData();

	std::vector<WorkoutStep> workoutSteps;
};
