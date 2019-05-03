#pragma once
#ifndef _ACCESS_USER_H__
#define _ACCESS_USER_H__

#include <iostream>
#include "IUser.h"

class AccessUser :public IUser
{
public:
	AccessUser() {};
	virtual ~AccessUser() {};

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
#endif // !_ACCESS_USER_H__
