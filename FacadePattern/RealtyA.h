#pragma once
#ifndef _REALTY_A_H__
#define _REALTY_A_H__

#include <iostream>

class RealtyA
{
public:
	RealtyA() {};
	virtual ~RealtyA() {};

public:
	void sell() { std::cout << "房地产A卖出" << std::endl; }
	void buy() { std::cout << "房地产A买入" << std::endl; }

};
#endif // !_REALTY_A_H__

