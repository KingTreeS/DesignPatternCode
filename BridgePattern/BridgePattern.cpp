#include "pch.h"
#include <iostream>
#include "HandsetBrandM.h"
#include "HandsetBrandN.h"
#include "HandsetGame.h"
#include "HandsetAddressList.h"

int main()
{
	HandsetBrandM brandM;
	HandsetBrandN brandN;
	HandsetGame game;
	HandsetAddressList address;

	brandM.SetHandsetSoft(&game);
	brandM.Run();

	brandM.SetHandsetSoft(&address);
	brandM.Run();

	brandN.SetHandsetSoft(&game);
	brandN.Run();

	brandN.SetHandsetSoft(&address);
	brandN.Run();

	return 0;
}