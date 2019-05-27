#pragma once
#ifndef _PERSON_BUILDER_H__
#define _PERSON_BUILDER_H__

#include "Person.h"

class PersonBuilder
{
public:
	PersonBuilder() :m_pPerson(nullptr)
	{
		if (m_pPerson == nullptr)
		{
			m_pPerson = new Person();
		}
	}
	virtual ~PersonBuilder() 
	{
		if (m_pPerson != nullptr)
		{
			delete m_pPerson;
			m_pPerson = nullptr;
		}
	}

public:
	virtual void BuildHead() = 0;
	virtual void BuildBody() = 0;
	virtual void BuildArm() = 0;
	virtual void BuildHand() = 0;
	virtual void BuildLeg() = 0;
	virtual void BuildFeet() = 0;
	
public:
	Person* GetPerson() { return m_pPerson; }

protected:
	Person*		m_pPerson;

};
#endif // !_PERSON_BUILDER_H__
