#pragma once
#include "readFile.h"
#include "../garminfitsdk/fit_encode.hpp"
#include "../garminfitsdk/fit_file_id_mesg.hpp"
#include "../garminfitsdk/fit_workout_mesg.hpp"
#include "../garminfitsdk/fit_workout_step_mesg.hpp"

#include "../garminfitsdk/fit_mesg_broadcaster.hpp"
//#include "fit_date_time.hpp"

#define SIZE_OF_FILE_EXTENSION 4

class writeFIT
{
public:
	writeFIT(unsigned int functionalThresholdPower, unsigned int powerRange);
	~writeFIT();
	void createFile(char* fileName);
	void closeFile();
	void fillFile(workoutInfo& data);

private:
	void fillFileId();
	void fillFileCreator();
	void fillWorkout(FIT_UINT16 numValidSteps);
	void fillWorkoutStep(workoutInfo& data);

	unsigned int functionalThresholdPower;
	unsigned int powerRange;
	fit::Encode encode;
	fstream outputFile;
	char outputFileName[_MAX_PATH];
};
