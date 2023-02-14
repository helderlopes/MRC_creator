#pragma once
#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

#define  ROWSIZE 1024

typedef enum
{
	INITIALFTP = 0,
	FINALFTP,
	COLUMNSIZE = 2
} Column;

typedef struct file_tag
{
	unsigned int	numberOfSteps;
	unsigned int	numberOfDescriptions;
	unsigned int	workoutFTPValues[ROWSIZE][COLUMNSIZE];
	double			workoutTimeValue[ROWSIZE];
	string			stepDescription[ROWSIZE];
} workoutInfo;

class readFile
{
public:
	readFile();
	~readFile();
	void openFile(char* fileName);
	void closeFile();
	void fillData();

	workoutInfo data;
private:
	ifstream inputFile;
};
