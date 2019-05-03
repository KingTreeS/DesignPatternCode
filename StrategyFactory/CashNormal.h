#pragma once
#ifndef _CASH_SUPER_H__
#define _CASH_SUPER_H__

#include "CashSuper.h"

class CashNormal :public CashSuper
{
public:
	CashNormal() {};
	virtual ~CashNormal() {};

private:
	virtual void acceptCash(const int money) const override
	{
		std::cout << "×Ü¼ÛÎª£º" << money << std::endl;
	}
};
#endif // !_CASH_SUPER_H__
