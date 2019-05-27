#include "pch.h"
#include <iostream>
#include "Person.h"
#include "PersonDirector.h"
#include "PersonFatBuilder.h"
#include "PersonThinBuilder.h"

void Destory(PersonBuilder* personBuilder)
{
	if (personBuilder != nullptr)
	{
		delete personBuilder;
		personBuilder = nullptr;
	}
}

int main()
{
	PersonThinBuilder* thinBuilder = new PersonThinBuilder();
	PersonFatBuilder* fatBuilder = new PersonFatBuilder();;

	PersonDirector director1(thinBuilder);
	PersonDirector director2(fatBuilder);

	Person* person1 = director1.Director();
	Person* person2 = director2.Director();
	person1->Show();
	person2->Show();

	Destory(thinBuilder);
	Destory(fatBuilder);

	return 0;
}