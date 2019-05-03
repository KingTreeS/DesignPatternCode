#pragma once
#ifndef _WORK_H__
#define _WORK_H__

#include "State.h"

class Work
{
public:
	Work(State* current)
		: m_pState(nullptr)
		, m_pWorkdone(false)
	{
		if (current != nullptr)
		{
			m_pState = current;
		}
	}
	virtual ~Work() {};

public:
	void SetHour(int hour) { m_pHour = hour; }
	int GetHour() { return m_pHour; }
	void SetWorkDone(bool flag) { m_pWorkdone = flag; }
	bool GetWorkDone() { return m_pWorkdone; }

	void WorkProgramme() { m_pState->WorkProgramme(this); }
	void SetState(State* current)
	{
		if (current != nullptr)
		{
			m_pState = current;
		}
	}

private:
	int			m_pHour;
	bool		m_pWorkdone;
	State*		m_pState;

};
#endif // !_WORK_H__

