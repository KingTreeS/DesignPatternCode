#pragma once
#ifndef _CONCRETE_AGGREGATE_H__
#define _CONCRETE_AGGREGATE_H__

#include <vector>
#include "Aggregate.h"

template<typename T>
class ConcreteAggregate :public Aggregate<T>
{
public:
	ConcreteAggregate() : m_pVector(nullptr) {};
	virtual ~ConcreteAggregate() {};

public:
	virtual int Count() override
	{
		return m_pVector.size();
	}

	virtual void Push(const T& val) override
	{
		m_pVector.push_back(val);
	}

	virtual T& Pop(int index) override
	{
		if (index >= Count())
		{
			return NULL;
		}
		return m_pVector[index];
	}

private:
	std::vector<T&> m_pVector;

};
#endif // !_CONCRETE_AGGREGATE_H__
