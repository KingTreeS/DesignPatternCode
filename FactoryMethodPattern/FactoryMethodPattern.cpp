#include "pch.h"
#include <iostream>
#include "Operation.h"
#include "IFactory.h"
#include "AddFactory.h"
#include "SubFactory.h"

int main()
{
	IFactory* operationFactory;
	Operation* operate;
	int result;

	operationFactory = new AddFactory();
	operate = operationFactory->CreateOperation();
	operate->SetNum(100, 20);
	result = operate->GetResult();
	std::cout << "100 + 20 = " << result << std::endl;

	operationFactory = new SubFactory();
	operate = operationFactory->CreateOperation();
	operate->SetNum(100, 20);
	result = operate->GetResult();
	std::cout << "100 - 20 = " << result << std::endl;

	if (operationFactory != nullptr)
	{
		delete operationFactory;
		operationFactory = nullptr;
	}
	
	if (operate != nullptr)
	{
		delete operate;
		operate = nullptr;
	}

	return 0;
}