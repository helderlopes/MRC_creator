#pragma once
#include "writeGeneric.h"

class writeMRC : public writeGeneric
{
public:
	writeMRC(const std::wstring& fileName, std::vector<WorkoutStep>& workoutSteps);
	void fillFile() override;

private:
	void fillHeader() override;
	void fillCourse() override;
	void fillDescription();

	bool hasAnyDescritpion;
	std::vector<double> descriptionsTime;
	std::vector<WorkoutStep> workoutSteps;
};
