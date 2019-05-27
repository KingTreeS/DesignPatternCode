#pragma once
#ifndef _PERSON_DIRECTOR_H__
#define _PERSON_DIRECTOR_H__

#include "Person.h"
#include "PersonBuilder.h"

class PersonDirector
{
public:
	PersonDirector(PersonBuilder* builder) :m_pBuilder(builder) {};
	virtual ~PersonDirector() {};

public:
	Person* Director()
	{
		if (m_pBuilder == nullptr)
		{
			return nullptr;
		}

		m_pBuilder->BuildHead();
		m_pBuilder->BuildBody();
		m_pBuilder->BuildArm();
		m_pBuilder->BuildHand();
		m_pBuilder->BuildLeg();
		m_pBuilder->BuildFeet();

		return m_pBuilder->GetPerson();
	}

private:
	PersonBuilder* m_pBuilder;

};
#endif // !_PERSON_DIRECTOR_H__
