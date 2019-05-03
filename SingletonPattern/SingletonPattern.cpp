#include "pch.h"
#include <iostream>
#include "Singleton.h"

int main()
{
	Singleton* singleton = Singleton::GetInstance();
	Singleton::Destory();

	return 0;
}