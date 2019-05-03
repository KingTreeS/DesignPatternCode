#pragma once
#ifndef _SUB_FACTORY_H__
#define _SUB_FACTORY_H__

#include "IFactory.h"
#include "OperationSub.h"

class SubFactory :public IFactory
{
public:
	SubFactory() {};
	virtual ~SubFactory() {};

public:
	virtual Operation* CreateOperation() const override { return new OperationSub(); }

};
#endif // !_SUB_FACTORY_H__

