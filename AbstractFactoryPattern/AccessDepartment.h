#pragma once
#ifndef _ACCESS_DEPARTMENT_H__
#define _ACCESS_DEPARTMENT_H__

#include <iostream>
#include "IDepartment.h"

class AccessDepartment :public IDepartment
{
public:
	AccessDepartment() {};
	virtual ~AccessDepartment() {};

protected:
	virtual void Insert() override
	{
		std::cout << "��Access�в��벿������" << std::endl;
	}

	virtual void GetDepartmentInfo(int id) override
	{
		std::cout << "����ID��õ�" << id << "�����ŵ���Ϣ" << std::endl;
	}
};
#endif // !_ACCESS_DEPARTMENT_H__

