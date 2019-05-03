#pragma once
#ifndef _PLAYER_H__
#define _PLAYER_H__

#include <iostream>

class Player
{
public:
	Player(std::string name) :m_pName(name) {};
	virtual ~Player() {};

public:
	virtual void Attack() = 0;
	virtual void Defense() = 0;

protected:
	std::string m_pName;

};
#endif // !_PLAYER_H__
