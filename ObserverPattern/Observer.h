#pragma once
#ifndef _OBSERVER_H__
#define _OBSERVER_H__

#include <iostream>
#include <string>

class Subject;

class Observer
{
public:
	Observer(Subject* subject, std::string name) :m_pSubject(nullptr), m_pObserverName(name)
	{
		if (subject != nullptr)
		{
			m_pSubject = subject;
		}
	}
	virtual ~Observer() {};
	
public:
	virtual void Update() = 0;

protected:
	Subject* m_pSubject;
	std::string m_pObserverName;

};
#endif // !_OBSERVER_H__
