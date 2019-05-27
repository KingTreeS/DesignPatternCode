#include "pch.h"
#include <iostream>
#include "Operation.h"
#include "IFactory.h"
#include "AddFactory.h"
#include "SubFactory.h"

void Destory(IFactory* operationFactory, Operation* operate)
{
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
}

int main()
{
	IFactory* operationFactory = nullptr;
	Operation* operate = nullptr;
	int result;

	operationFactory = new AddFactory();
	operate = operationFactory->CreateOperation();
	operate->SetNum(100, 20);
	result = operate->GetResult();
	std::cout << "100 + 20 = " << result << std::endl;

	Destory(operationFactory, operate);

	operationFactory = new SubFactory();
	operate = operationFactory->CreateOperation();
	operate->SetNum(100, 20);
	result = operate->GetResult();
	std::cout << "100 - 20 = " << result << std::endl;

	Destory(operationFactory, operate);

	return 0;
}