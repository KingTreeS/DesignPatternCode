#pragma once
#ifndef _SQLSERVER_USER_H__
#define _SQLSERVER_USER_H__

#include <iostream>
#include "IUser.h"

class SQLServerUser :public IUser
{
public:
	SQLServerUser() {};
	virtual ~SQLServerUser() {};

protected:
	virtual void Insert() override
	{
		std::cout << "��Access�в����û�����" << std::endl;
	}

	virtual void GetUserInfo(int id) override
	{
		std::cout << "����ID��õ�" << id << "λ�û�����Ϣ" << std::endl;
	}
};
#endif // !_SQLSERVER_USER_H__
