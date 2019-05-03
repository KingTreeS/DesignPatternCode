#pragma once
#ifndef _GUARDS_H__
#define _GUARDS_H__

#include <string>
#include <iostream>
#include "Player.h"

class Guards :public Player
{
public:
	Guards(std::string name) :Player(name) {};
	virtual ~Guards() {};

public:
	virtual void Attack() override
	{
		std::cout << m_pName << " ";
		std::cout << "����������" << std::endl;
	}

	virtual void Defense() override
	{
		std::cout << m_pName << " ";
		std::cout << "�������أ�" << std::endl;
	}

};
#endif // !_GUARDS_H__
