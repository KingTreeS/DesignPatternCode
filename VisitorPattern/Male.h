#pragma once
#ifndef _MALE_H__
#define _MALE_H__

#include "Person.h"
#include "Action.h"

class Male :public Person
{
public:
	Male() {};
	virtual ~Male() {};

public:
	virtual void Accept(Action* action) override
	{
		if (action == nullptr)
		{
			return;
		}
		action->GetMaleAction();
	}

};
#endif // !_MALE_H__
