#pragma once
#ifndef _HANDSET_GAME_H__
#define _HANDSET_GAME_H__

#include <iostream>
#include "HandsetSoft.h"

class HandsetGame :public HandsetSoft
{
public:
	HandsetGame() {};
	virtual ~HandsetGame() {};

public:
	virtual void Run() override
	{
		std::cout << "运行手机游戏" << std::endl;
	}

};
#endif // !_HANDSET_GAME_H__

