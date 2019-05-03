#pragma once
#ifndef _HANDSET_BRAND_H__
#define _HANDSET_BRAND_H__

#include "HandsetSoft.h"

class HandsetBrand
{
public:
	HandsetBrand() :m_pHandsetSoft(nullptr) {};
	virtual ~HandsetBrand() {};

public:
	void SetHandsetSoft(HandsetSoft* handsetSoft) 
	{ 
		if (handsetSoft == nullptr)
		{
			return;
		}
		m_pHandsetSoft = handsetSoft; 
	}

	virtual void Run() = 0;

protected:
	HandsetSoft* m_pHandsetSoft;

};
#endif // !_HANDSET_BRAND_H__
