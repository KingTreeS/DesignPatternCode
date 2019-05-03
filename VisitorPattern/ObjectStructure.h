#pragma once
#ifndef _OBJECT_STRUCTURE_H__
#define _OBJECT_STRUCTURE_H__

#include <vector>

#include "Person.h"
#include "Action.h"

class ObjectStructure
{
public:
	ObjectStructure() {};
	virtual ~ObjectStructure() {};

public:
	void Attach(Person* person)
	{
		if (person == nullptr)
		{
			return;
		}
		m_pPersonList.push_back(person);
	}

	void Distach(Person* person)
	{
		if (person == nullptr)
		{
			return;
		}

		std::vector<Person*>::iterator iter;
		iter = std::find(m_pPersonList.begin(), m_pPersonList.end(), person);
		if (iter != m_pPersonList.end())
		{
			m_pPersonList.erase(iter);
		}
	}

	void Display(Action* action)
	{
		if (action == nullptr)
		{
			return;
		}
		for (auto person : m_pPersonList)
		{
			person->Accept(action);
		}
	}

private:
	std::vector<Person*> m_pPersonList;

};
#endif // !_OBJECT_STRUCTURE_H__
