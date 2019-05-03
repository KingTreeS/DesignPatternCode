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
		std::cout << "向Access中插入用户数据" << std::endl;
	}

	virtual void GetUserInfo(int id) override
	{
		std::cout << "根据ID获得第" << id << "位用户的信息" << std::endl;
	}
};
#endif // !_ACCESS_USER_H__
