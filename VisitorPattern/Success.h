#pragma once
#ifndef _SUCCESS_H__
#define _SUCCESS_H__

#include <iostream>
#include "Action.h"

class Success :public Action
{
public:
	Success() {};
	virtual ~Success() {};

public:
	virtual void GetMaleAction() override
	{
		std::cout << "背后多半有一个伟大的女人" << std::endl;
	}

	virtual void GetFemaleAction() override
	{
		std::cout << "背后多半有一个失败的男人" << std::endl;
	}

};
#endif // !_SUCCESS_H__
