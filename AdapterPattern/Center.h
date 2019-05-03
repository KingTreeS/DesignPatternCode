#pragma once
#ifndef _CENTER_H__
#define _CENTER_H__

#include <string>
#include <iostream>
#include "Player.h"

class Center :public Player
{
public:
	Center(std::string name) :Player(name) {};
	virtual ~Center() {};

public:
	virtual void Attack() override
	{
		std::cout << m_pName << " ";
		std::cout << "�з������" << std::endl;
	}

	virtual void Defense() override
	{
		std::cout << m_pName << " ";
		std::cout << "�з���أ�" << std::endl;
	}

};
#endif // !_CENTER_H__
