#pragma once
#ifndef _ACTION_H__
#define _ACTION_H__

class Action
{
public:
	Action() {};
	virtual ~Action() {};

public:
	virtual void GetMaleAction() = 0;
	virtual void GetFemaleAction() = 0;

};
#endif // !_ACTION_H__

