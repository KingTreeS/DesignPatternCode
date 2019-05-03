#pragma once
#ifndef _COMMON_MANAGER_H__
#define _COMMON_MANAGER_H__

#include <string>
#include <iostream>
#include "Manager.h"
#include "Request.h"

class CommonManager :public Manager
{
public:
	CommonManager(std::string name) :Manager(name) {};
	virtual ~CommonManager() {};

public:
	virtual void RequestApplications(Request& request) override
	{
		if (request.GetRequestType() == "请假" && request.GetRequestNumber() <= 2)
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
#endif // !_COMMON_MANAGER_H__
