#pragma once
#ifndef _STOCK_B_H__
#define _STOCK_B_H__

#include <iostream>

class StockB
{
public:
	StockB() {};
	virtual ~StockB() {};

public:
	void sell() { std::cout << "股票B卖出" << std::endl; }
	void buy() { std::cout << "股票B买入" << std::endl; }

};
#endif // !_STOCK_B_H__