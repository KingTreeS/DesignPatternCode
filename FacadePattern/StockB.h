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
	void sell() { std::cout << "��ƱB����" << std::endl; }
	void buy() { std::cout << "��ƱB����" << std::endl; }

};
#endif // !_STOCK_B_H__