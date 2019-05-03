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
		std::cout << "当前时间：" << hour << "点\n"
			<< "不行了，睡着了！" << std::endl;
	}

};
#endif // !_SLEEPING_STATE_H__
