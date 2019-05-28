#pragma once
#ifndef _NBA_OBSERVER_H__
#define _NBA_OBSERVER_H__

#include <string>
#include <iostream>
#include "Observer.h"

class NBAObserver :public Observer
{
public:
	NBAObserver(std::string name) :Observer(name) {};
	virtual ~NBAObserver() {};

protected:
	virtual void Update() override
	{
		std::cout << m_pObserverName << "快关闭NBA，继续工作！！！" << std::endl;
	}

};
#endif // !_NBA_OBSERVER_H__
