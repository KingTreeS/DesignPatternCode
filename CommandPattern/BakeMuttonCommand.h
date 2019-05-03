#pragma once
#ifndef _BAKE_MUTTON_COMMAND_H__
#define _BAKE_MUTTON_COMMAND_H__

#include "Command.h"

class BakeMuttonCommand :public Command
{
public:
	BakeMuttonCommand(Barbecuer& barbecuer) :Command(barbecuer){};
	virtual ~BakeMuttonCommand() {};

public:
	virtual void ExcuteCommand() override
	{
		if (m_pBarbecuer == nullptr)
		{
			return;
		}
		m_pBarbecuer->BakeMutton();
	}

};
#endif // !_BAKE_MUTTON_COMMAND_H__
