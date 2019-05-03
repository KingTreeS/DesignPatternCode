#pragma once
#ifndef _FOREWARDS_H__
#define _FOREWARDS_H__

#include <string>
#include <iostream>
#include "Player.h"

class Forwards :public Player
{
public:
	Forwards(std::string name) :Player(name) {};
	virtual ~Forwards() {};

public:
	virtual void Attack() override
	{
		std::cout << m_pName << " ";
		std::cout << "ǰ�������" << std::endl;
	}

	virtual void Defense() override
	{
		std::cout << m_pName << " ";
		std::cout << "ǰ����أ�" << std::endl;
	}

};
#endif // !_FOREWARDS_H__
