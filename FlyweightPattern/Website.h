#pragma once
#ifndef _WEBSITE_H__
#define _WEBSITE_H__

#include <string>
#include "User.h"

class Website
{
public:
	Website(std::string name) :m_pName(name){};
	virtual ~Website() {};

public:
	virtual void Use(User* user) = 0;

protected:
	std::string m_pName;

};
#endif // !_WEBSITE_H__
