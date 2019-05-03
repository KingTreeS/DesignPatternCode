#pragma once
#ifndef _FORENOON_STATE_H__
#define _FORENOON_STATE_H__

#include <iostream>
#include "State.h"
#include "Work.h"
#include "NoonState.h"

class ForenoonState :public State
{
public:
	ForenoonState() {};
	virtual ~ForenoonState() {};

public:
	virtual void WorkProgramme(Work* work) override
	{
		if (work == nullptr)
		{
			return;
		}

		int hour = work->GetHour();
		if (hour < 12)
		{
			std::cout << "当前时间：" << hour << "点\n"
				<< "上午工作，精神好！" << std::endl;
		}
		else
		{
			work->SetState(new NoonState());
			work->WorkProgramme();
		}
	}

};
#endif // !_FORENOON_STATE_H__
