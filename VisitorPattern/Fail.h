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
		std::cout << "ÃÆÍ·ºÈ¾Æ£¬Ë­Ò²²»ÓÃÈ°" << std::endl;
	}

	virtual void GetFemaleAction() override
	{
		std::cout << "ÑÛÀáÍôÍô£¬Ë­Ò²È°²»×¡" << std::endl;
	}

};
#endif // !_FAIL_H__
