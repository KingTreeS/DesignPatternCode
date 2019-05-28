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
	UnitedNationsSecurityCouncil() {};
	virtual ~UnitedNationsSecurityCouncil() {};

public:
	virtual void SendMessage(CountryInfo info, std::string msg) override
	{
		switch (info)
		{
		case AMERICA:
			if (m_pIraq != nullptr)
			{
				m_pIraq->GetMessage(msg);
			}
			break;
		case IRAQ:
			if (m_pAmerica != nullptr)
			{
				m_pAmerica->GetMessage(msg);
			}
			break;
		default:
			break;
		}
	}

	void SetAmerica(America* america)
	{
		if (america != nullptr)
		{
			m_pAmerica = america;
		}
	}

	void SetIraq(Iraq* iraq)
	{
		if (iraq != nullptr)
		{
			m_pIraq = iraq;
		}
	}

private:
	America* m_pAmerica;
	Iraq* m_pIraq;

};
#endif // !_UNITED_NATIONS_SECURITY_COUNCIL_H__

