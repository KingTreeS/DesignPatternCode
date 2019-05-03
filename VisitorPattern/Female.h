#pragma once
#ifndef _FEMALE_H__
#define _FEMALE_H__

#include "Person.h"
#include "Action.h"

class Female :public Person
{
public:
	Female() {};
	virtual ~Female() {};

public:
	virtual void Accept(Action* action) override
	{
		if (action == nullptr)
		{
			return;
		}
		action->GetFemaleAction();
	}

};
#endif // !_FEMALE_H__
