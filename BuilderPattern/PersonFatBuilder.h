#pragma once
#ifndef _PERSON_FAT_BUILDER_H__
#define _PERSON_FAT_BUILDER_H__

#include <iostream>
#include "PersonBuilder.h"

class PersonFatBuilder :public PersonBuilder
{
public:
	PersonFatBuilder() {};
	virtual ~PersonFatBuilder() {};

public:
	virtual void BuildHead() override { m_pPerson->setHead("胖子头部"); }
	virtual void BuildBody() override { m_pPerson->setBody("胖子身体"); }
	virtual void BuildArm() override { m_pPerson->setArm("胖子手臂"); }
	virtual void BuildHand() override { m_pPerson->setHand("胖子手掌"); }
	virtual void BuildLeg() override { m_pPerson->setLeg("胖子腿部"); }
	virtual void BuildFeet() override { m_pPerson->setFeet("胖子脚掌"); }

};
#endif // !_PERSON_FAT_BUILDER_H__
