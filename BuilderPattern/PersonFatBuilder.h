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
	virtual void BuildHead() override { std::cout << "胖子头部" << std::endl; }
	virtual void BuildBody() override { std::cout << "胖子身体" << std::endl; }
	virtual void BuildArm() override { std::cout << "胖子手臂" << std::endl; }
	virtual void BuildHand() override { std::cout << "胖子手掌" << std::endl; }
	virtual void BuildLeg() override { std::cout << "胖子腿部" << std::endl; }
	virtual void BuildFeet() override { std::cout << "胖子脚掌" << std::endl; }

};
#endif // !_PERSON_FAT_BUILDER_H__
