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
	virtual void BuildHead() override { std::cout << "����ͷ��" << std::endl; }
	virtual void BuildBody() override { std::cout << "��������" << std::endl; }
	virtual void BuildArm() override { std::cout << "�����ֱ�" << std::endl; }
	virtual void BuildHand() override { std::cout << "��������" << std::endl; }
	virtual void BuildLeg() override { std::cout << "�����Ȳ�" << std::endl; }
	virtual void BuildFeet() override { std::cout << "���ӽ���" << std::endl; }
};
#endif // !_PERSON_THIN_BUILDER_H__
