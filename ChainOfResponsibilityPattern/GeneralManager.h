#pragma once
#ifndef _GENERAL_MANAGER_H__
#define _GENERAL_MANAGER_H__

#include <string>
#include <iostream>
#include "Manager.h"
#include "Request.h"

class GeneralManager :public Manager
{
public:
	GeneralManager(std::string name) :Manager(name) {};
	virtual ~GeneralManager() {};

public:
	virtual void RequestApplications(Request& request) override
	{
		if (request.GetRequestType() == "���" && request.GetRequestNumber() <= 10)
		{
			std::cout << m_pName << "��" << request.GetRequestType() << request.GetRequestNumber() << "�챻��׼" << std::endl;
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
#endif // !_GENERAL_MANAGER_H__
