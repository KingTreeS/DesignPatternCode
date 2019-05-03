#pragma once
#ifndef _DATA_ACCESS_H__
#define _DATA_ACCESS_H__

#include "IUser.h"
#include "IDepartment.h"
#include "AccessUser.h"
#include "SQLServerUser.h"
#include "AccessDepartment.h"
#include "SQLServerDepartment.h"

enum DatabaseInfo
{
	ACCESS = 0,
	SQLSERVER = 1
};

class DataAccess
{
public:
	static IUser* CreateUser()
	{
		IUser* userTable = nullptr;
		switch (m_pDatabase)
		{
		case ACCESS:
			userTable = new AccessUser();
			break;
		case SQLSERVER:
			userTable = new SQLServerUser();
			break;
		default:
			std::cerr << "创建出错！" << std::endl;
			break;
		}
		return userTable;
	}

	static IDepartment* CreateDepartment()
	{
		IDepartment* departmentTable = nullptr;
		switch (m_pDatabase)
		{
		case ACCESS:
			departmentTable = new AccessDepartment();
			break;
		case SQLSERVER:
			departmentTable = new SQLServerDepartment();
			break;
		default:
			std::cerr << "创建出错！" << std::endl;
			break;
		}
		return departmentTable;
	}

protected:
	DataAccess() {};
	virtual ~DataAccess() {};

private:
	static DatabaseInfo m_pDatabase;

};

DatabaseInfo DataAccess::m_pDatabase = ACCESS;
#endif // !_DATA_ACCESS_H__
