#pragma once
#ifndef _I_USER_H__
#define _I_USER_H__

#include <string>

class IUser
{
public:
	IUser() {};
	virtual ~IUser() {};

public:
	virtual void Insert() = 0;
	virtual void GetUserInfo(int id) = 0;

protected:
	std::string		m_pName;
	int				m_pId;

};
#endif // !_I_USER_H__
