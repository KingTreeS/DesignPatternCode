#pragma once
#ifndef _WAITER_H__
#define _WAITER_H__

#include <vector>
#include "Command.h"

class Waiter
{
public:
	Waiter() {};
	virtual ~Waiter() {};

public:
	void SetCommand(Command* command)
	{
		if (command == nullptr)
		{
			return;
		}
		m_pCommandList.push_back(command);
	}

	void CancelCommand(Command* command)
	{
		if (command == nullptr)
		{
			return;
		}
		
		std::vector<Command*>::iterator iter;
		iter = std::find(m_pCommandList.begin(), m_pCommandList.end(), command);

		if (iter != m_pCommandList.end())
		{
			m_pCommandList.erase(iter);
		}
	}

	void Notify() 
	{
		for (auto command : m_pCommandList)
		{
			command->ExcuteCommand();
		}
	}

private:
	std::vector<Command*> m_pCommandList;

};
#endif // !_WAITER
