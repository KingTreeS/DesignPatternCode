#pragma once
#ifndef _EVENING_STATE_H__
#define _EVENING_STATE_H__

#include <iostream>
#include "State.h"
#include "Work.h"
#include "RestState.h"
#include "SleepingState.h"

class EveningState :public State
{
public:
	EveningState() {};
	virtual ~EveningState() {};

public:
	virtual void WorkProgramme(Work* work) override
	{
		if (work == nullptr)
		{
			return;
		}

		if (work->GetWorkDone())
		{
			work->SetState(new RestState());
			work->WorkProgramme();
		}
		else
		{
			int hour = work->GetHour();
			if (hour < 17)
			{
				std::cout << "��ǰʱ�䣺" << hour << "��\n"
					<< "�Ӱ�Ŷ��ƣ����" << std::endl;
			}
			else {
				work->SetState(new SleepingState());
				work->WorkProgramme();
			}
		}
	}

};
#endif // !_EVENING_STATE_H__
