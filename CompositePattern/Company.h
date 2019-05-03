#pragma once
#ifndef _COMPANY_H__
#define _COMPANY_H__

#include <string>

class Company
{
public:
	Company(std::string name) :m_pName(name) {};
	virtual ~Company() {};

public:
	virtual void Add(Company* company) = 0;
	virtual void Remove(Company* company) = 0;
	virtual void Display(int depth) = 0;
	virtual void LineOfDuty() = 0;

protected:
	std::string m_pName;

};
#endif // !_COMPANY_H__

