#include "pch.h"
#include <iostream>
#include "SchoolGirl.h"
#include "Proxy.h"

int main()
{
	SchoolGirl girl;
	girl.SetName("LuLu");
	Proxy proxy(&girl);

	proxy.GiveDolls();
	proxy.GiveFlowers();
	proxy.GiveChocolate();

	return 0;
}
