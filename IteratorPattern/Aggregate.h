#pragma once
#ifndef _AGGREGATE_H__
#define _AGGREGATE_H__

#include <vector>
#include "Iterator.h"

class Aggregate
{
public:
	Aggregate() {};
	virtual ~Aggregate() 
	{
		if (!m_pDataList.empty())
		{
			m_pDataList.clear();
		}
	}

public:
	virtual Iterator* CreateIterator() = 0;
	virtual void SetData(std::string data) = 0;
	virtual std::vector<std::string>* GetDataList() = 0;


protected:
	std::vector<std::string> m_pDataList;

};
#endif // !_AGGREGATE_H__
