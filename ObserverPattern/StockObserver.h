#pragma once
#ifndef _STOCK_OBSERVER_H__
#define _STOCK_OBSERVER_H__

#include <string>
#include <iostream>
#include "Observer.h"

class StockObserver :public Observer
{
public:
	StockObserver(std::string name) :Observer(name) {};
	virtual ~StockObserver() {};

protected:
	virtual void Update() override
	{
		std::cout << m_pObserverName << "��رչ�Ʊ����������������" << std::endl;
	}

};
#endif // !_STOCK_OBSERVER_H__
