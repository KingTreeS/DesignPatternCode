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
	void sell() { std::cout << "��ծA����" << std::endl; }
	void buy() { std::cout << "��ծA����" << std::endl; }

};
#endif // !_NATIONAL_DEBT_A_H__

