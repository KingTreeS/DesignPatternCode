#pragma once
#ifndef _STOCK_OBSERVER_H__
#define _STOCK_OBSERVER_H__

#include <string>
#include <iostream>
#include "Observer.h"

class StockObserver :public Observer
{
public:
	StockObserver(Subject* subject, std::string name) :Observer(subject, name) {};
	virtual ~StockObserver() {};

protected:
	virtual void Update() override
	{
		std::cout << m_pSubject->GetSubjectName() << "来了,"
			<< m_pObserverName << "快关闭股票，继续工作！！！" << std::endl;
	}

};
#endif // !_STOCK_OBSERVER_H__
