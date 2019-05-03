#pragma once
#ifndef _COUNTRY_H__
#define _COUNTRY_H__

#include <string>

class Country
{
public:
	Country() {};
	virtual ~Country() {};

public:
	virtual void Send(std::string msg) = 0;

};
#endif // !_COUNTRY_H__
