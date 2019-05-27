#include "pch.h"
#include <iostream>
#include "IGiveGift.h"
#include "SchoolGirl.h"
#include "Proxy.h"

int main()
{
	SchoolGirl girl;
	girl.SetName("LuLu");
	IGiveGift* proxy = new Proxy(&girl);

	proxy->GiveDolls();
	proxy->GiveFlowers();
	proxy->GiveChocolate();

	return 0;
}
