#pragma once
#ifndef _CONCRETE_ITERATOR_H__
#define _CONCRETE_ITERATOR_H__

#include "Iterator.h"
#include "Aggregate.h"

template<typename T>
class ConcreteIterator :public Iterator<T>
{
public:
	ConcreteIterator(Aggregate<T>* aggregate)
		: m_pAggregate(nullptr)
		, m_pCount(0)
	{
		if (aggregate != nullptr)
		{
			m_pAggregate = aggregate;
		}
	}
	virtual ~ConcreteIterator() {};

public:
	virtual T First() override
	{
		return m_pAggregate->Pop(0);
	}

	virtual T Next() override
	{
		m_pCount++;
		if (m_pCount < m_pAggregate->Count())
		{
			return m_pAggregate->Pop(m_pCount);
		}
	}

	virtual bool IsDone() override
	{
		return (m_pCount >= m_pAggregate->Count() ? true : false);
	}

	virtual T CurrentItem() override
	{
		return m_pAggregate->Pop(m_pCount);
	}

private:
	Aggregate<T>* m_pAggregate;
	int m_pCount;

};
#endif // !_CONCRETE_ITERATOR_H__
