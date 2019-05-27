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
	virtual void BuildHead() override { m_pPerson->setHead("瘦子头部"); }
	virtual void BuildBody() override { m_pPerson->setBody("瘦子身体"); }
	virtual void BuildArm() override { m_pPerson->setArm("瘦子手臂"); }
	virtual void BuildHand() override { m_pPerson->setHand("瘦子手掌"); }
	virtual void BuildLeg() override { m_pPerson->setLeg("瘦子腿部"); }
	virtual void BuildFeet() override { m_pPerson->setFeet("瘦子脚掌"); }
};
#endif // !_PERSON_THIN_BUILDER_H__
