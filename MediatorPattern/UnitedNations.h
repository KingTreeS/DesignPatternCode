#pragma once
#ifndef _UNITED_NATIONS_H__
#define _UNITED_NATIONS_H__

#include <string>

enum CountryInfo
{
	AMERICA = 0,
	IRAQ = 1
};

class Country;

class UnitedNations
{
public:
	UnitedNations() {};
	virtual ~UnitedNations() {};

public:
	virtual void SendMessage(CountryInfo info, std::string msg) = 0;

};
#endif // !_UNITED_NATIONS_H__

