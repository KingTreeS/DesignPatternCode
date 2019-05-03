#pragma once
#ifndef _REQUEST_H__
#define _REQUEST_H__

#include <string>

class Request
{
public:
	Request() {};
	virtual ~Request() {};

public:
	void SetRequestType(std::string type) { m_pRequestType = type; }
	void SetRequestContext(std::string context) { m_pRequestContext = context; }
	void SetRequestNumber(int number) { m_pRequestNumber = number; }

	std::string GetRequestType() { return m_pRequestType; }
	std::string GetRequestContext() { return m_pRequestContext; }
	int GetRequestNumber() { return m_pRequestNumber; }

private:
	std::string			m_pRequestType;
	std::string			m_pRequestContext;
	int					m_pRequestNumber;
};
#endif // !_REQUEST_H__
