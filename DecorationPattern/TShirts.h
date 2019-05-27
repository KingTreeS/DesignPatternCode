#pragma once
#ifndef _TSHIRTS_H__
#define _TSHIRTS_H__

#include <iostream>
#include "Finery.h"

class TShirts :public Finery
{
public:
	TShirts() {};
	virtual ~TShirts() {};

public:
	virtual void Show() const override
	{
		std::cout << "TÐô" << std::endl;

		if (m_pBase != nullptr)
		{
			m_pBase->Show();
		}
		return;
	}
};
#endif // !_TSHIRTS_H__
