#pragma once
#ifndef _USER_H__
#define _USER_H__

#include <string>

class User
{
public:
	User(std::string name) :m_pName(name) {};
	virtual ~User() {};

public:
	std::string GetUserName() { return m_pName; }

private:
	std::string m_pName;

};
#endif // !_USER_H__

