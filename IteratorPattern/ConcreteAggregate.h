#pragma once
#ifndef _CONCRETE_AGGREGATE_H__
#define _CONCRETE_AGGREGATE_H__

#include <vector>
#include "Aggregate.h"
#include "ConcreteIterator.h"

class ConcreteAggregate :public Aggregate
{
public:
	ConcreteAggregate() {};
	virtual ~ConcreteAggregate() {};

public:
	virtual Iterator* CreateIterator() override
	{
		return new ConcreteIterator(GetDataList());
	}

	virtual void SetData(std::string data) override
	{
		m_pDataList.push_back(data);
	}

	virtual std::vector<std::string>* GetDataList()override
	{
		return &m_pDataList;
	}

};
#endif // !_CONCRETE_AGGREGATE_H__
