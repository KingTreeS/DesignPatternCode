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
	virtual void BuildHead() override { std::cout << "����ͷ��" << std::endl; }
	virtual void BuildBody() override { std::cout << "��������" << std::endl; }
	virtual void BuildArm() override { std::cout << "�����ֱ�" << std::endl; }
	virtual void BuildHand() override { std::cout << "��������" << std::endl; }
	virtual void BuildLeg() override { std::cout << "�����Ȳ�" << std::endl; }
	virtual void BuildFeet() override { std::cout << "���ӽ���" << std::endl; }

};
#endif // !_PERSON_FAT_BUILDER_H__
