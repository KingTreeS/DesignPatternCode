#pragma once
#ifndef _TRANSLATOR_H__
#define _TRANSLATOR_H__

#include <string>
#include <iostream>
#include "Player.h"
#include "ForeignCenter.h"

class Translator :public Player
{
public:
	Translator(std::string name)
		:Player(name)
		, m_pForeignCenter(nullptr)
	{
		m_pForeignCenter = new ForeignCenter();
	}
	virtual ~Translator() {};

public:
	virtual void Attack() override
	{
		std::cout << m_pName << " ";
		m_pForeignCenter->ForeignAttack();
	}

	virtual void Defense() override
	{
		std::cout << m_pName << " ";
		m_pForeignCenter->ForeignDefense();
	}

private:
	ForeignCenter* m_pForeignCenter;

};
#endif // !_TRANSLATOR_H__
