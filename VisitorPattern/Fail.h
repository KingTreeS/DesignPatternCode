#pragma once
#ifndef _FAIL_H__
#define _FAIL_H__

#include <iostream>
#include "Action.h"

class Fail :public Action
{
public:
	Fail() {};
	virtual ~Fail() {};

public:
	virtual void GetMaleAction() override
	{
		std::cout << "��ͷ�Ⱦƣ�˭Ҳ����Ȱ" << std::endl;
	}

	virtual void GetFemaleAction() override
	{
		std::cout << "����������˭ҲȰ��ס" << std::endl;
	}

};
#endif // !_FAIL_H__
