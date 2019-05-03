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

	person.SetDecoration(&shoes);
	shoes.SetDecoration(&trouser);
	trouser.SetDecoration(&shirts);
	person.Show();

	return 0; 
}