#pragma once
#ifndef _PURSUIT_H__
#define _PURSUIT_H__

#include <iostream>
#include "IGiveGift.h"
#include "SchoolGirl.h"

class Pursuit :public IGiveGift
{
public:
	Pursuit(const SchoolGirl* girl) 
	{
		if (girl == nullptr)
		{
			std::cerr << "未设置被追求者" << std::endl;
			return;
		}
		m_pGirl = girl;
	}

	virtual ~Pursuit() {};

public:
	virtual void GiveDolls() const override
	{
		std::cout << "送洋娃娃给" << m_pGirl->GetName() << std::endl;
		return;
	}

	virtual void GiveFlowers() const override
	{
		std::cout << "送花给" << m_pGirl->GetName() << std::endl;
		return;
	}

	virtual void GiveChocolate() const override
	{
		std::cout << "送巧克力给" << m_pGirl->GetName() << std::endl;
		return;
	}

private:
	const SchoolGirl* m_pGirl;

};
#endif // !_PURSUIT_H__
