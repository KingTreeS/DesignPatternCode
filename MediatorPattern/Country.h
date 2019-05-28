#pragma once
#ifndef _COUNTRY_H__
#define _COUNTRY_H__

#include <string>
#include "UnitedNations.h"

class Country
{
public:
	Country() {};
	virtual ~Country() {};

public:
	virtual void SendMessage(std::string msg) = 0;
	virtual void GetMessage(std::string msg) = 0;

public:
	void SetMediator(UnitedNations* unitedNations)
	{
		if (unitedNations != nullptr)
		{
			m_pUnitedNations = unitedNations;
		}
	}

protected:
	UnitedNations* m_pUnitedNations;

};
#endif // !_COUNTRY_H__
