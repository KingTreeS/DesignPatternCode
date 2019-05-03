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
		std::cout << "向Access中插入部门数据" << std::endl;
	}

	virtual void GetDepartmentInfo(int id) override
	{
		std::cout << "根据ID获得第" << id << "个部门的信息" << std::endl;
	}
};
#endif // !_ACCESS_DEPARTMENT_H__

