#pragma once
#include <math.h>
#include "CashSuper.h"

class CashReturn :public CashSuper
{
public:
	CashReturn(const int full, const int reduction)
	{
		m_pFull = full;
		m_pReduction = reduction;
	}

	virtual ~CashReturn() {};

private:
	virtual void acceptCash(const int money) const override
	{
		std::cout << "×Ü¼ÛÎª£º" << money - (round(money / m_pFull)*m_pReduction) << std::endl;
	}

private:
	int m_pFull;
	int m_pReduction;
};