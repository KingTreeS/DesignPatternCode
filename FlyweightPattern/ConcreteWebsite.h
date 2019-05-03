#pragma once
#ifndef _CONCRETE_WEBSITE_H__
#define _CPNCRETE_WEBSITE_H__

#include <string>
#include <iostream>
#include "Website.h"
#include "User.h"

class ConcreteWebsite :public Website
{
public:
	ConcreteWebsite(std::string name) :Website(name) {};
	virtual ~ConcreteWebsite() {};

public:
	virtual void Use(User* user) override
	{
		if (user == nullptr)
		{
			return;
		}
		std::cout << "��վ���ࣺ" << m_pName << " �û���" << user->GetUserName() << std::endl;
	}

};
#endif // !_CONCRETE_WEBSITE_H__
