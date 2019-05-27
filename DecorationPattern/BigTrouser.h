#pragma once
#ifndef _BIG_TROUSER_H__
#define _BIG_TROUSER_H__

#include "Finery.h"

class BigTrouser :public Finery
{
public:
	BigTrouser() {};
	virtual ~BigTrouser() {};

protected:
	virtual void Show() const override
	{
		std::cout << "¿å¿ã" << std::endl;

		if (m_pBase != nullptr)
		{
			m_pBase->Show();
		}
		return;
	}
};
#endif // !_BIG_TROUSER_H__
