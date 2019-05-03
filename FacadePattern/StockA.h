#pragma once
#ifndef _STOCK_A_H__
#define _STOCK_A_H__

#include <iostream>

class StockA
{
public:
	StockA() {};
	virtual ~StockA() {};

public:
	void sell() { std::cout << "股票A卖出" << std::endl; }
	void buy() { std::cout << "股票A买入" << std::endl; }

};
#endif // !_STOCK_A_H__
