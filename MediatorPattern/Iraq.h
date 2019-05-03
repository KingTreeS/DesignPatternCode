#pragma once
#ifndef _IRAQ_H__
#define _IRAQ_H__

#include <string>
#include <iostream>
#include "Country.h"

class Iraq :public Country
{
public:
	Iraq() {};
	virtual ~Iraq() {};

public:
	virtual void Send(std::string msg) override
	{
		std::cout << "伊拉克获得对方信息：" << msg << std::endl;
	}

};
#endif // !_IRAQ_H__
