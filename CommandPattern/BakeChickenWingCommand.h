#pragma once
#ifndef _BAKE_CHICKEN_WING_COMMAND_H__
#define _BAKE_CHICKEN_WING_COMMAND_H__

#include "Command.h"

class BakeChickenWingCommand :public Command
{
public:
	BakeChickenWingCommand(Barbecuer& barbecuer) :Command(barbecuer) {};
	virtual ~BakeChickenWingCommand() {};

public:
	virtual void ExcuteCommand() override
	{
		if (m_pBarbecuer == nullptr)
		{
			return;
		}
		m_pBarbecuer->BakeChickenWing();
	}

};
#endif // !_BAKE_CHICKEN_WING_COMMAND_H__
