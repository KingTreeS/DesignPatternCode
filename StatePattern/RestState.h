#pragma once
#ifndef _REST_STATE_H__
#define _REST_STATE_H__

#include <iostream>
#include "State.h"
#include "Work.h"

class RestState :public State
{
public:
	RestState() {};
	virtual ~RestState() {};

public:
	virtual void WorkProgramme(Work* work) override
	{
		if (work == nullptr)
		{
			return;
		}

		int hour = work->GetHour();
		std::cout << "当前时间：" << hour << "点\n"
			<< "下班回家！" << std::endl;
	}

};
#endif // !_REST_STATE_H__
