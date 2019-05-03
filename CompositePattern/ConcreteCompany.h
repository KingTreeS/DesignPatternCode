#pragma once
#ifndef _CONCRETE_COMPANY_H__
#define _CONCRETE_COMPANY_H__

#include <string>
#include <iostream>
#include <vector>
#include "Company.h"

class ConcreteCompany :public Company
{
public:
	ConcreteCompany(std::string name) :Company(name) {};
	virtual ~ConcreteCompany() {};

public:
	virtual void Add(Company* company) override
	{
		if (company == nullptr)
		{
			return;
		}
		m_pCompList.push_back(company);
	}
	virtual void Remove(Company* company) override
	{
		if (company == nullptr)
		{
			return;
		}

		std::vector<Company*>::iterator iter;
		iter = std::find(m_pCompList.begin(), m_pCompList.end(), company);

		if (iter!= m_pCompList.end())
		{
			m_pCompList.erase(iter);
		}
	}
	virtual void Display(int depth) override
	{
		std::string str(depth, '-');
		std::cout << str << m_pName << std::endl;
		for (auto company : m_pCompList)
		{
			company->Display(depth + 2);
		}
	}
	virtual void LineOfDuty() override
	{
		for (auto company : m_pCompList)
		{
			company->LineOfDuty();
		}
	}

private:
	std::vector<Company*> m_pCompList;

};
#endif // !_CONCRETE_COMPANY_H__
