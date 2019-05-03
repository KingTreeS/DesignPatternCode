#pragma once
#ifndef _HANDSET_BRAND_N_H__
#define _HANDSET_BRAND_N_H__

#include <iostream>
#include "HandsetBrand.h"

class HandsetBrandN :public HandsetBrand
{
public:
	HandsetBrandN() {};
	virtual ~HandsetBrandN() {};

public:
	virtual void Run() override
	{
		std::cout << "运行手机品牌N" << std::endl;
		if (m_pHandsetSoft != nullptr)
		{
			m_pHandsetSoft->Run();
		}
	}

};
#endif // !_HANDSET_BRAND_N_H__
