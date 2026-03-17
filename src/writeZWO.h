#pragma once
#include "writeGeneric.h"



class writeZWO : public writeGeneric
{
public:
	writeZWO(const std::wstring& fileName, std::vector<WorkoutStep>& workoutSteps);
	void fillFile() override;

private:
	void fillHeader() override;
	void fillCourse() override;

	bool hasAnyDescritpion;
	std::vector<double> descriptionsTime;
	std::vector<WorkoutStep> workoutSteps;
};
