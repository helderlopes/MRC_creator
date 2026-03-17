#pragma once
#include "readFile.h"
#include "../garminfitsdk/fit_encode.hpp"
#include "../garminfitsdk/fit_file_id_mesg.hpp"
#include "../garminfitsdk/fit_workout_mesg.hpp"
#include "../garminfitsdk/fit_workout_step_mesg.hpp"

#include "../garminfitsdk/fit_mesg_broadcaster.hpp"
//#include "fit_date_time.hpp"

constexpr auto SIZE_OF_FILE_EXTENSION = 4;

class writeFIT
{
public:
	writeFIT(const std::wstring& fileName, std::vector<WorkoutStep>& workoutSteps, unsigned int functionalThresholdPower, unsigned int powerRange);
	~writeFIT();
	void createFile();
	void closeFile();
	void fillFile();

private:
	void fillFileId();
	void fillFileCreator();
	void fillWorkout();
	void fillWorkoutSteps();

	unsigned int functionalThresholdPower;
	unsigned int powerRange;
	bool hasAnyDescritpion;
	std::vector<double> descriptionsTime;
	std::vector<WorkoutStep> workoutSteps;
	fit::Encode encode;
	std::fstream outputFile;
	std::wstring _outputFileName;
};
