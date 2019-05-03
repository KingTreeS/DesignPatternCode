#pragma once
#ifndef _SLEEPING_STATE_H__
#define _SLEEPING_STATE_H__

#include <iostream>
#include "State.h"
#include "Work.h"

class SleepingState :public State
{
public:
	SleepingState() {};
	virtual ~SleepingState() {};

public:
	virtual void WorkProgramme(Work* work) override
	{
		if (work == nullptr)
		{
			return;
		}

		int hour = work->GetHour();
		std::cout << "��ǰʱ�䣺" << hour << "��\n"
			<< "�����ˣ�˯���ˣ�" << std::endl;
	}

};
#endif // !_SLEEPING_STATE_H__
