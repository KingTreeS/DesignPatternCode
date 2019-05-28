#pragma once
#ifndef _COMMAND_H__
#define _COMMAND_H__

#include "Barbecuer.h"

class Command
{
public:
	Command(Barbecuer& barbecuer) :m_pBarbecuer(&barbecuer) {};
	virtual ~Command() {};

public:
	virtual void ExcuteCommand() = 0;

protected:
	Barbecuer* m_pBarbecuer;

};
#endif // !_COMMAND_H__
