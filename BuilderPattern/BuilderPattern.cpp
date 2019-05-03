#include "pch.h"
#include <iostream>

#include "PersonDirector.h"
#include "PersonFatBuilder.h"
#include "PersonThinBuilder.h"

int main()
{
	PersonThinBuilder thinBuilder;
	PersonFatBuilder fatBuilder;

	PersonDirector director1(thinBuilder);
	PersonDirector director2(fatBuilder);

	director1.Director();
	director2.Director();

	return 0;
}