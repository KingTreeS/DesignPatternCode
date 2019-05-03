#pragma once
#include "CashSuper.h"

class CashRebate :public CashSuper
{
public:
	CashRebate(const int rebate) { m_pRebate = rebate; }
	virtual ~CashRebate() {};

private:
	virtual void acceptCash(const int money) const override
	{
		std::cout << "×Ü¼ÛÎª£º" << money * m_pRebate << std::endl;
	}

private:
	int m_pRebate;
};