#pragma once
#ifndef _HR_DEPARTMENT_H__
#define _HR_DEPARTMENT_H__

#include <string>
#include <iostream>
#include "Company.h"

class HRDepartment :public Company
{
public:
	HRDepartment(std::string name) :Company(name){};
	virtual ~HRDepartment() {};

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
		std::cout << m_pName << "员工招聘培训管理" << std::endl;
	}

};
#endif // !_HR_DEPARTMENT_H__
