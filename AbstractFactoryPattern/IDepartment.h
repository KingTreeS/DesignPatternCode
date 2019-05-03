#pragma once
#ifndef _I_DEPARTMENT_H__
#define _I_DEPARTMENT_H__

#include <string>

class IDepartment
{
public:
	IDepartment() {};
	virtual ~IDepartment() {};

public:
	virtual void Insert() = 0;
	virtual void GetDepartmentInfo(int id) = 0;

protected:
	std::string m_pDepartment;
	int m_pId;

};
#endif // !_I_DEPARTMENT_H__
