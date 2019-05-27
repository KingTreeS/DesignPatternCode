#pragma once
#ifndef _PROXY_H__
#define _PROXY_H__

#include <iostream>
#include "IGiveGift.h"
#include "SchoolGirl.h"
#include "Pursuit.h"

class Proxy :public IGiveGift
{
public:
	Proxy(const SchoolGirl* girl)
	{
		if (girl == nullptr)
		{
			std::cerr << "δ���ñ�׷����" << std::endl;
			return;
		}
		m_pPursuit = new Pursuit(girl);
	}
	virtual ~Proxy() 
	{
		if (m_pPursuit != nullptr)
		{
			delete m_pPursuit;
			m_pPursuit = nullptr;
		}
	}

protected:
	virtual void GiveDolls() const override
	{
		if (m_pPursuit == nullptr)
		{
			std::cerr << "δ���ñ�������" << std::endl;
			return;
		}
		m_pPursuit->GiveDolls();
	}

	virtual void GiveFlowers() const override
	{
		if (m_pPursuit == nullptr)
		{
			std::cerr << "δ���ñ�������" << std::endl;
			return;
		}
		m_pPursuit->GiveFlowers();
	}

	virtual void GiveChocolate() const override
	{
		if (m_pPursuit == nullptr)
		{
			std::cerr << "δ���ñ�������" << std::endl;
			return;
		}
		m_pPursuit->GiveChocolate();
	}

private:
	const Pursuit* m_pPursuit;
	
};
#endif // !_PROXY_H__
