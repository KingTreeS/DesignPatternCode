#pragma once
#ifndef _FINANCE_DEPARTMENT_H__
#define _FINANCE_DEPARTMENT_H__

#include <string>
#include <iostream>
#include "Company.h"

class FinanceDepartment :public Company
{
public:
	FinanceDepartment(std::string name) :Company(name) {};
	virtual ~FinanceDepartment() {};

public:
	virtual void Add(Company* company) override {};
	virtual void Remove(Company* company) override {};
	virtual void Display(int depth) override
	{
		std::string str(depth, '-');
		std::cout << str << m_pName << std::endl;
	}
	virtual void LineOfDuty() override
	{
		std::cout << m_pName << "公司财务收支管理" << std::endl;
	}

};
#endif // !_FINANCE_DEPARTMENT_H__
