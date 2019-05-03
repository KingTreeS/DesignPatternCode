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
	virtual void BuildHead() override { std::cout << "瘦子头部" << std::endl; }
	virtual void BuildBody() override { std::cout << "瘦子身体" << std::endl; }
	virtual void BuildArm() override { std::cout << "瘦子手臂" << std::endl; }
	virtual void BuildHand() override { std::cout << "瘦子手掌" << std::endl; }
	virtual void BuildLeg() override { std::cout << "瘦子腿部" << std::endl; }
	virtual void BuildFeet() override { std::cout << "瘦子脚掌" << std::endl; }
};
#endif // !_PERSON_THIN_BUILDER_H__
