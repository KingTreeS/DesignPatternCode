#pragma once
#ifndef _SQLSERVER_DEPARTMENT_H__
#define _SQLSERVER_DEPARTMENT_H__

#include <iostream>
#include "IDepartment.h"

class SQLServerDepartment :public IDepartment
{
public:
	SQLServerDepartment() {};
	virtual ~SQLServerDepartment() {};

protected:
	virtual void Insert() override
	{
		std::cout << "��SQLServer�в��벿������" << std::endl;
	}

	virtual void GetDepartmentInfo(int id) override
	{
		std::cout << "����ID��õ�" << id << "�����ŵ���Ϣ" << std::endl;
	}
};
#endif // !_SQLSERVER_DEPARTMENT_H__
