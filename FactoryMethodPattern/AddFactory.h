#pragma once
#ifndef _ADD_FACTORY_H__
#define _ADD_FACTORY_H__

#include "IFactory.h"
#include "OperationAdd.h"

class AddFactory :public IFactory
{
public:
	AddFactory() {};
	virtual ~AddFactory() {};

public:
	virtual Operation* CreateOperation() const override { return new OperationAdd(); }
};
#endif // !_ADD_FACTORY_H__
