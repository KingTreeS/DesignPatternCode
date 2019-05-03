#pragma once
#ifndef _IFACTORY_H__
#define _IFACTORY_H__

class Operation;

class IFactory
{
public:
	IFactory() {};
	virtual ~IFactory() {};

public:
	virtual Operation* CreateOperation() const = 0;

};
#endif // !_IFACTORY_H__
