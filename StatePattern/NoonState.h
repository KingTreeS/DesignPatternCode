#pragma once
#ifndef _NOON_STATE_H__
#define _NOON_STATE_H__

#include <iostream>
#include "State.h"
#include "Work.h"
#include "AfternoonState.h"

class NoonState :public State
{
public:
	NoonState() {};
	virtual ~NoonState() {};

public:
	virtual void WorkProgramme(Work* work) override
	{
		if (work == nullptr)
		{
			return;
		}

		int hour = work->GetHour();
		if (hour < 13)
		{
			std::cout << "��ǰʱ�䣺" << hour << "��\n"
				<< "���ݣ�" << std::endl;
		}
		else
		{
			work->SetState(new AfternoonState());
			work->WorkProgramme();
		}
	}

};
#endif // !_NOON_STATE_H__
