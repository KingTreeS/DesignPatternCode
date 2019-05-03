#include "pch.h"
#include <iostream>
#include "ObjectStructure.h"
#include "Male.h"
#include "Female.h"
#include "Success.h"
#include "Fail.h"

int main()
{
	ObjectStructure structure;

	Male male1;
	Male male2;
	Male male3;
	Male male4;

	Female female1;
	Female female2;
	Female female3;
	Female female4;

	Success success;
	Fail fail;

	structure.Attach(&male1);
	structure.Attach(&female1);
	structure.Attach(&male2);
	structure.Attach(&female2);
	structure.Attach(&male3);
	structure.Attach(&male4);
	structure.Attach(&female3);
	structure.Attach(&female4);

	structure.Distach(&male4);

	structure.Display(&success);
	structure.Display(&fail);

	return 0;
}