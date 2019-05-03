#pragma once
#ifndef _SHOES_H__
#define _SHOES_H__

#include "Finery.h"

class Shoes :public Finery
{
public:
	Shoes() {};
	virtual ~Shoes() {};

protected:
	virtual void Show() const override
	{
		if (m_pBase != nullptr)
		{
			m_pBase->Show();
		}
		std::cout << "°×Ð¬" << std::endl;
		return;
	}
};
#endif // !_SHOES_H__

