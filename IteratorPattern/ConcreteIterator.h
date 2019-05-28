#pragma once
#ifndef _CONCRETE_ITERATOR_H__
#define _CONCRETE_ITERATOR_H__

#include <vector>
#include "Iterator.h"
#include "ConcreteAggregate.h"

class ConcreteIterator :public Iterator
{
public:
	ConcreteIterator(std::vector<std::string>* dataList)
		: m_pDataList(nullptr)
		, m_pCount(0)
	{
		if (dataList != nullptr)
		{
			m_pDataList = dataList;
		}
	}
	virtual ~ConcreteIterator() {};

public:
	virtual std::string First() override
	{
		if (m_pDataList == nullptr)
		{
			return NULL;
		}

		if ((*m_pDataList).empty())
		{
			return NULL;
		}

		return (*m_pDataList).at(0);
	}

	virtual std::string Next() override
	{
		if (m_pDataList == nullptr)
		{
			return NULL;
		}

		if ((*m_pDataList).empty())
		{
			return NULL;
		}

		m_pCount++;
		if (m_pCount < (*m_pDataList).size())
		{
			return (*m_pDataList).at(m_pCount);
		}
	}

	virtual bool IsDone() override
	{
		if (m_pDataList == nullptr)
		{
			return NULL;
		}

		if ((*m_pDataList).empty())
		{
			return NULL;
		}

		return (m_pCount + 1 >= (*m_pDataList).size() ? true : false);
	}

	virtual std::string CurrentItem() override
	{
		if (m_pDataList == nullptr)
		{
			return NULL;
		}

		if ((*m_pDataList).empty())
		{
			return NULL;
		}

		if (m_pCount < (*m_pDataList).size())
		{
			return (*m_pDataList).at(m_pCount);
		}
	}

private:
	std::vector<std::string>* m_pDataList;
	int m_pCount;

};
#endif // !_CONCRETE_ITERATOR_H__
