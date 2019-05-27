#pragma once
#ifndef _FUND_H__
#define _FUND_H__

#include "StockA.h"
#include "StockB.h"
#include "StockC.h"
#include "NationalDebtA.h"
#include "RealtyA.h"

class Fund
{
public:
	Fund()
	{
		m_pStockA = new StockA();
		m_pStockB = new StockB();
		m_pStockC = new StockC();
		m_pNationalDebtA = new NationalDebtA();
		m_pRealtyA = new RealtyA();
	}
	virtual ~Fund() 
	{
		if (m_pStockA != nullptr)
		{
			delete m_pStockA;
			m_pStockA = nullptr;
		}
		if (m_pStockB != nullptr)
		{
			delete m_pStockB;
			m_pStockB = nullptr;
		}
		if (m_pStockC != nullptr)
		{
			delete m_pStockC;
			m_pStockC = nullptr;
		}
		if (m_pNationalDebtA != nullptr)
		{
			delete m_pNationalDebtA;
			m_pNationalDebtA = nullptr;
		}
		if (m_pRealtyA != nullptr)
		{
			delete m_pRealtyA;
			m_pRealtyA = nullptr;
		}
	}

public:
	void FundSell()
	{
		m_pStockA->sell();
		m_pStockB->sell();
		m_pStockC->sell();
		m_pNationalDebtA->sell();
		m_pRealtyA->sell();
	}

	void FundBuy()
	{
		m_pStockA->buy();
		m_pStockB->buy();
		m_pStockC->buy();
		m_pNationalDebtA->buy();
		m_pRealtyA->buy();
	}

private:
	StockA* m_pStockA;
	StockB* m_pStockB;
	StockC* m_pStockC;
	NationalDebtA* m_pNationalDebtA;
	RealtyA* m_pRealtyA;

};
#endif // !_FUND_H__

