#pragma once
#ifndef _PERSON_THIN_BUILDER_H__
#define _PERSON_THIN_BUILDER_H__

#include <iostream>
#include "PersonBuilder.h"

class PersonThinBuilder :public PersonBuilder
{
public:
	PersonThinBuilder() {};
	virtual ~PersonThinBuilder() {};

public:
	virtual void BuildHead() override { m_pPerson->setHead("����ͷ��"); }
	virtual void BuildBody() override { m_pPerson->setBody("��������"); }
	virtual void BuildArm() override { m_pPerson->setArm("�����ֱ�"); }
	virtual void BuildHand() override { m_pPerson->setHand("��������"); }
	virtual void BuildLeg() override { m_pPerson->setLeg("�����Ȳ�"); }
	virtual void BuildFeet() override { m_pPerson->setFeet("���ӽ���"); }
};
#endif // !_PERSON_THIN_BUILDER_H__
