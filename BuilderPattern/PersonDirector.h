#pragma once
#ifndef _PERSON_DIRECTOR_H__
#define _PERSON_DIRECTOR_H__

#include "PersonBuilder.h"

class PersonDirector
{
public:
	PersonDirector(PersonBuilder& builder) { m_pBuilder = &builder; }
	virtual ~PersonDirector() {};

public:
	void Director()
	{
		if (m_pBuilder == nullptr)
		{
			return;
		}

		m_pBuilder->BuildHead();
		m_pBuilder->BuildBody();
		m_pBuilder->BuildArm();
		m_pBuilder->BuildHand();
		m_pBuilder->BuildLeg();
		m_pBuilder->BuildFeet();
	}

private:
	PersonBuilder* m_pBuilder;

};
#endif // !_PERSON_DIRECTOR_H__
