#include "pch.h"
#include <iostream>
#include "Player.h"
#include "Guards.h"
#include "Forwards.h"
#include "Center.h"
#include "Translator.h"

int main()
{
	Player* player = nullptr;

	player = new Guards("保罗");
	player->Attack();
	player->Defense();
	delete player;
	player = nullptr;

	player = new Forwards("勒布朗");
	player->Attack();
	player->Defense();
	delete player;
	player = nullptr;

	player = new Center("奥尼尔");
	player->Attack();
	player->Defense();
	delete player;
	player = nullptr;

	player = new Translator("姚明");
	player->Attack();
	player->Defense();
	delete player;
	player = nullptr;

	return 0;
}