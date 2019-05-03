#pragma once
#ifndef _STOCK_C_H__
#define _STOCK_C_H__

#include <iostream>

class StockC
{
public:
	StockC() {};
	virtual ~StockC() {};

public:
	void sell() { std::cout << "股票C卖出" << std::endl; }
	void buy() { std::cout << "股票C买入" << std::endl; }

};
#endif // !_STOCK_C_H__