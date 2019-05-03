#pragma once
#ifndef _SUBJECT_H__
#define _SUBJECT_H__

#include <string>
#include <vector>
#include "Observer.h"

class Subject
{
public:
	Subject() {};
	virtual ~Subject() {};

public:
	void Attach(Observer* observer) 
	{
		if (observer != nullptr)
		{
			m_pObserverList.push_back(observer);
		}
	}
	void SetSubjectName(const std::string name) { m_pSubjectName = name; }
	std::string GetSubjectName() { return m_pSubjectName; }

	virtual void Notify() = 0;

protected:
	std::string m_pSubjectName;
	std::vector<Observer*> m_pObserverList;

};
#endif // !_SUBJECT_H__

