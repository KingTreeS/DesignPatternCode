#pragma once
#ifndef _AFTERNOON_STATE_H__
#define _AFTERNOON_STATE_H__

#include <iostream>
#include "State.h"
#include "Work.h"
#include "EveningState.h"

class AfternoonState :public State
{
public:
	AfternoonState() {};
	virtual ~AfternoonState() {};

public:
	virtual void WorkProgramme(Work* work) override
	{
		if (work == nullptr)
		{
			return;
		}

		int hour = work->GetHour();
		if (hour < 17)
		{
			std::cout << "��ǰʱ�䣺" << hour << "��\n"
				<< "����״̬����" << std::endl;
		}
		else
		{
			work->SetState(new EveningState());
			work->WorkProgramme();
		}
	}

};
#endif // !_AFTERNOON_STATE_H__
