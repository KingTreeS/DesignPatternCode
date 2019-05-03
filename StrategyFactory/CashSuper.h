#pragma once
#include <iostream>

class CashSuper
{
public:
	CashSuper() {};
	virtual ~CashSuper() {};

public:
	virtual void acceptCash(const int money) const = 0;
};
