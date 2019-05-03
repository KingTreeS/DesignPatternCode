#pragma once
#ifndef _NATIONAL_DEBT_A_H__
#define _NATIONAL_DEBT_A_H__

#include <iostream>

class NationalDebtA
{
public:
	NationalDebtA() {};
	virtual ~NationalDebtA() {};

public:
	void sell() { std::cout << "国债A卖出" << std::endl; }
	void buy() { std::cout << "国债A买入" << std::endl; }

};
#endif // !_NATIONAL_DEBT_A_H__

