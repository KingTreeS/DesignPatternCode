#include "pch.h"
#include <iostream>
#include <string>
#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

int main()
{
	ConcreteAggregate<std::string>* concreteAggregate = nullptr;
	concreteAggregate = new ConcreteAggregate<std::string>();

	concreteAggregate->Push("Hello");
	concreteAggregate->Push("BigTree");
	concreteAggregate->Push("World");

	ConcreteIterator<std::string>* iter = nullptr;
	iter = new ConcreteIterator<std::string>(concreteAggregate);

	std::cout << iter->First() << "is OK" << std::endl;
	while (!iter->IsDone())
	{
		std::cout << iter->Next() << "is OK" << std::endl;
	}
	return 0;
}