#pragma once
#include "writeGeneric.h"

class writeERG : public writeGeneric
{
public:
	writeERG(unsigned int functionalThresholdPower);
	void fillFile(workoutInfo& data);

private:
	void fillHeader();
	void fillCourse(workoutInfo& data);

	unsigned int functionalThresholdPower;
};
