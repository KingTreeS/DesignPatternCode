#pragma once
#ifndef _MAJOR_DOMO_H__
#define _MAJOR_DOMO_H__

#include <string>
#include <iostream>
#include "Manager.h"
#include "Request.h"

class Majordomo :public Manager
{
public:
	Majordomo(std::string name) :Manager(name) {};
	virtual ~Majordomo() {};

public:
	virtual void RequestApplications(Request& request) override
	{
		if (request.GetRequestType() == "请假" && request.GetRequestNumber() <= 5)
		{
			std::cout << m_pName << "：" << request.GetRequestType() << request.GetRequestNumber() << "天被批准" << std::endl;
		}
		else
		{
			if (m_pManager != nullptr)
			{
				m_pManager->RequestApplications(request);
			}
		}
	}

};
#endif // !_MAJOR_DOMO_H__
