#pragma once
#ifndef _STATE_H__
#define _STATE_H__

class Work;

class State
{
public:
	State() {};
	virtual ~State() {};

public:
	virtual void WorkProgramme(Work* work) = 0;

};
#endif // !_STATE_H__

