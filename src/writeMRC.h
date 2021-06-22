#pragma once
#include "writeGeneric.h"

class writeMRC : public writeGeneric
{
public:
	void fillFile(workoutInfo &data);

private:
	void fillHeader();
	void fillCourse(workoutInfo& data);
};
