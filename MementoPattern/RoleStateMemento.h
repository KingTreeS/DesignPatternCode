#pragma once
#ifndef _ROLE_STATE_MEMENTO_H__
#define _ROLE_STATE_MEMENTO_H__

class RoleStateMemento
{
	friend class Role;
	friend class RoleStateCaretaker;

public:
	RoleStateMemento() {};
	virtual ~RoleStateMemento() {};

private:
	void SetVitality(int vitality) { m_pVitality = vitality; }
	void SetAttack(int attack) { m_pAttack = attack; }
	void SetDefense(int defense) { m_pDefense = defense; }

	int GetVitality() { return m_pVitality; }
	int GetAttack() { return m_pAttack; }
	int GetDefense() { return m_pDefense; }

private:
	int m_pVitality;
	int m_pAttack;
	int m_pDefense;

};
#endif // !_ROLE_STATE_MEMENTO_H__
