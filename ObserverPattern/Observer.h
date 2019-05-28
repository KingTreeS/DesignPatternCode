#pragma once
#ifndef _OBSERVER_H__
#define _OBSERVER_H__

#include <iostream>
#include <string>

class Subject;

class Observer
{
public:
	Observer(std::string name) :m_pObserverName(name) {};
	virtual ~Observer() {};
	
public:
	virtual void Update() = 0;

protected:
	std::string m_pObserverName;

};
#endif // !_OBSERVER_H__
