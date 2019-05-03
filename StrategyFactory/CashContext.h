#pragma once
#include <string>
#include "CashSuper.h"
#include "CashNormal.h"
#include "CashRebate.h"
#include "CashReturn.h"

enum CashOperation
{
	NORMAL = 0,
	REBATE = 1,
	RETURN = 2
};

class CashContext
{
public:
	CashContext(const std::string& operate)
	{
		if (operate == "NORMAL")
		{
			cashSuper = new CashNormal();
		}
		else if (operate == "REBATE")
		{
			cashSuper = new CashRebate(0.8);
		}
		else if (operate == "RETURN")
		{
			cashSuper = new CashReturn(300, 100);
		}
		else
		{
			cashSuper = nullptr;
			std::cout << "无该项优惠活动" << std::endl;
		}
	}

	virtual ~CashContext() 
	{
		if (cashSuper != nullptr)
		{
			delete cashSuper;
		}
	}

public:
	void GetResult(const int money) const
	{
		if (cashSuper == nullptr)
		{
			std::cout << "未创建该项优惠" << std::endl;
			return;
		}

		cashSuper->acceptCash(money);
	}

private:
	CashSuper* cashSuper;
};
