#include "pch.h"
#include <iostream>
#include "Work.h"
#include "State.h"
#include "ForenoonState.h"

int main()
{
	Work work(new ForenoonState());

	work.SetHour(10);
	work.WorkProgramme();

	work.SetHour(12);
	work.WorkProgramme();

	work.SetHour(14);
	work.WorkProgramme();

	work.SetHour(19);
	work.WorkProgramme();

	work.SetHour(20);
	work.WorkProgramme();

	work.SetHour(22);
	work.SetWorkDone(true);
	work.WorkProgramme();

	return 0;
}
