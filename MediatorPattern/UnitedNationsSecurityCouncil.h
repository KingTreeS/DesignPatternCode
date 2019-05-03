#pragma once
#ifndef _UNITED_NATIONS_SECURITY_COUNCIL_H__
#define _UNITED_NATIONS_SECURITY_COUNCIL_H__

#include <string>
#include "UnitedNations.h"
#include "Country.h"
#include "America.h"
#include "Iraq.h"

class UnitedNationsSecurityCouncil :public UnitedNations
{
public:
	UnitedNationsSecurityCouncil() :m_pAmerica(nullptr), m_pIraq(nullptr) {};
	virtual ~UnitedNationsSecurityCouncil() {};

public:
	void SetCountryAmerica(America* country)
	{
		if (country == nullptr)
		{
			return;
		}
		m_pAmerica = country;
	}

	void SetCountryIraq(Iraq* country)
	{
		if (country == nullptr)
		{
			return;
		}
		m_pIraq = country;
	}

	virtual void SendMessage(CountryInfo info, std::string msg) override
	{
		switch (info)
		{
		case AMERICA:
			if (m_pIraq != nullptr)
			{
				m_pIraq->Send(msg);
			}
			break;
		case IRAQ:
			if (m_pAmerica != nullptr)
			{
				m_pAmerica->Send(msg);
			}
			break;
		default:
			break;
		}
	}

private:
	America* m_pAmerica;
	Iraq* m_pIraq;

};
#endif // !_UNITED_NATIONS_SECURITY_COUNCIL_H__

