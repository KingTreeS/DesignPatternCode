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
		std::cout << "向SQLServer中插入部门数据" << std::endl;
	}

	virtual void GetDepartmentInfo(int id) override
	{
		std::cout << "根据ID获得第" << id << "个部门的信息" << std::endl;
	}
};
#endif // !_SQLSERVER_DEPARTMENT_H__
