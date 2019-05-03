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
			std::cerr << "δ���ñ�׷����" << std::endl;
			return;
		}
		m_pGirl = girl;
	}

	virtual ~Pursuit() {};

public:
	virtual void GiveDolls() const override
	{
		std::cout << "�������޸�" << m_pGirl->GetName() << std::endl;
		return;
	}

	virtual void GiveFlowers() const override
	{
		std::cout << "�ͻ���" << m_pGirl->GetName() << std::endl;
		return;
	}

	virtual void GiveChocolate() const override
	{
		std::cout << "���ɿ�����" << m_pGirl->GetName() << std::endl;
		return;
	}

private:
	const SchoolGirl* m_pGirl;

};
#endif // !_PURSUIT_H__
