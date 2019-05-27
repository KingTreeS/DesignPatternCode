#include "pch.h"
#include <iostream>
#include "Person.h"
#include "TShirts.h"
#include "BigTrouser.h"
#include "Shoes.h"

int main()
{
	Person person("BigTree");
	TShirts shirts;
	BigTrouser trouser;
	Shoes shoes;

	shirts.SetDecoration(&trouser);
	trouser.SetDecoration(&shoes);
	shoes.SetDecoration(&person);

	shirts.Show();

	return 0; 
}