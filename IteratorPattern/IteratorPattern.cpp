#include "pch.h"
#include <iostream>
#include <string>
#include "Aggregate.h"
#include "Iterator.h"
#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

int main()
{
	Aggregate* concreteAggregate = new ConcreteAggregate();

	std::string h("Hello");
	concreteAggregate->SetData(h);
	std::string m("My");
	concreteAggregate->SetData(m);
	std::string w("World");
	concreteAggregate->SetData(w);

	Iterator* iter = concreteAggregate->CreateIterator();

	std::cout << iter->First() << " is OK" << std::endl;
	while (!iter->IsDone())
	{
		std::cout << iter->Next() << " is OK" << std::endl;
	}

	if (concreteAggregate != nullptr)
	{
		delete concreteAggregate;
		concreteAggregate = nullptr;
	}
	return 0;
}