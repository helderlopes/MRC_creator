#pragma once
#include "writeGeneric.h"

class writeERG : public writeGeneric
{
public:
	writeERG(const std::wstring& fileName, std::vector<WorkoutStep>& workoutSteps, unsigned int functionalThresholdPower);
	void fillFile() override;

private:
	void fillHeader() override;
	void fillCourse() override;
	void fillDescription();

	bool hasAnyDescritpion;
	unsigned int functionalThresholdPower;
	std::vector<double> descriptionsTime;
	std::vector<WorkoutStep> workoutSteps;
};
