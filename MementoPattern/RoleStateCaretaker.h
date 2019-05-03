#pragma once
#ifndef _ROLE_STATE_CARETAKER_H__
#define _ROLE_STATE_CARETAKER_H__

#include "RoleStateMemento.h"

class RoleStateCaretaker
{
public:
	RoleStateCaretaker() {};
	virtual ~RoleStateCaretaker() {};

public:
	void SetMemento(RoleStateMemento* memento)
	{
		if (memento == nullptr)
		{
			return;
		}
		m_pMemento = memento;
	}

	RoleStateMemento* GetMemento() { return m_pMemento; }

private:
	RoleStateMemento* m_pMemento;

};
#endif // !_ROLE_STATE_CARETAKER_H__
