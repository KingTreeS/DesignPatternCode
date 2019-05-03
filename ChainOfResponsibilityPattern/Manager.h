#pragma once
#ifndef _MANAGER_H__
#define _MANAGER_H__

#include <string>

class Request;

class Manager
{
public:
	Manager(std::string name) :m_pManager(nullptr), m_pName(name) {};
	virtual ~Manager() {};

public:
	virtual void SetManager(Manager* manager) { m_pManager = manager; }
	virtual void RequestApplications(Request& request) = 0;

protected:
	Manager* m_pManager;
	std::string m_pName;

};
#endif // !_MANAGER_H__

