#include "pch.h"
#include <iostream>
#include "Role.h"
#include "RoleStateCaretaker.h"

int main()
{
	Role role;
	role.SetVitality(100);
	role.SetAttack(80);
	role.SetDefense(60);
	role.Show();

	RoleStateCaretaker roleStateCaretaker;
	roleStateCaretaker.SetMemento(role.CreateMemento());

	role.SetVitality(60);
	role.Show();

	role.SetMemento(roleStateCaretaker.GetMemento());
	role.Show();

	return 0;
}