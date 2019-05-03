#pragma once
#ifndef _ROLE_H__
#define _ROLE_H__

#include <iostream>
#include "RoleStateMemento.h"

class Role
{
public:
	Role() {};
	virtual ~Role() {};

public:
	void SetVitality(int vitality) { m_pVitality = vitality; }
	void SetAttack(int attack) { m_pAttack = attack; }
	void SetDefense(int defense) { m_pDefense = defense; }
	void Show()
	{
		std::cout << "生命力：" << GetVitality() << "\n"
			<< "攻击力：" << GetAttack() << "\n"
			<< "防御力：" << GetDefense() << "\n";
	}

private:
	int GetVitality() { return m_pVitality; }
	int GetAttack() { return m_pAttack; }
	int GetDefense() { return m_pDefense; }

public:
	RoleStateMemento* CreateMemento() 
	{ 
		RoleStateMemento* memento = new RoleStateMemento();
		memento->SetVitality(GetVitality());
		memento->SetAttack(GetAttack());
		memento->SetDefense(GetDefense());
		return memento;
	}

	void SetMemento(RoleStateMemento* memento)
	{
		if (memento == nullptr)
		{
			return;
		}
		SetVitality(memento->GetVitality());
		SetAttack(memento->GetAttack());
		SetDefense(memento->GetDefense());
	}

private:
	int m_pVitality;
	int m_pAttack;
	int m_pDefense;

};
#endif // !
