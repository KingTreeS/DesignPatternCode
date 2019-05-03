#pragma once
#ifndef _OPERATION_FACTORY_H__
#define _OPERATION_FACTORY_H__

#include "Operation.h"
#include "OperationAdd.h"
#include "OperationSub.h"

class OperationFactory
{
public:
	static Operation* CreateOperation(const char& operate)
	{
		Operation* operation = nullptr;

		switch (operate)
		{
		case '+':
			operation = new OperationAdd();
			break;
		case '-':
			operation = new OperationSub();
			break;
		default:
			break;
		}

		return operation;
	}

private:
	OperationFactory() {};
	~OperationFactory() {};
};
#endif // !_OPERATION_FACTORY_H__

