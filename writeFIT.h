#pragma once
#include "readFile.h"
#include "fit_encode.hpp"
#include "fit_file_id_mesg.hpp"
#include "fit_workout_mesg.hpp"
#include "fit_workout_step_mesg.hpp"

#include "fit_mesg_broadcaster.hpp"
//#include "fit_date_time.hpp"

#define FTP 215
#define POWER_OFFSET 10

#define VALUE_TO_ADD_ON_TARGET_POWER 1000

#define SIZE_OF_FILE_EXTENSION 4

class writeFIT
{
public:
	writeFIT();
	~writeFIT();
	void createFile(char* fileName);
	void closeFile();
	void fillFile(workoutInfo& data);

private:
	void fillFileId();
	void fillFileCreator();
	void fillWorkout(FIT_UINT16 numValidSteps);
	void fillWorkoutStep(workoutInfo& data);

	fit::Encode encode;
	fstream outputFile;
	char outputFileName[_MAX_PATH];
};
