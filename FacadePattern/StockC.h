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
	void sell() { std::cout << "��ƱC����" << std::endl; }
	void buy() { std::cout << "��ƱC����" << std::endl; }

};
#endif // !_STOCK_C_H__