#pragma once
#ifndef _AMERICA_H__
#define _AMERICA_H__

#include <string>
#include <iostream>
#include "Country.h"

class America :public Country
{
public:
	America() {};
	virtual ~America() {};

public:
	virtual void Send(std::string msg) override
	{
		std::cout << "美国获得对方信息：" << msg << std::endl;
	}

};
#endif // !_AMERICA_H__
