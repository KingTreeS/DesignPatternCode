#pragma once
#ifndef _HANDSET_BRAND_M_H__
#define _HANDSET_BRAND_M_H__

#include <iostream>
#include "HandsetBrand.h"

class HandsetBrandM :public HandsetBrand
{
public:
	HandsetBrandM() {};
	virtual ~HandsetBrandM() {};

public:
	virtual void Run() override
	{
		std::cout << "运行手机品牌M" << std::endl;
		if (m_pHandsetSoft != nullptr)
		{
			m_pHandsetSoft->Run();
		}
	}

};
#endif // !_HANDSET_BRAND_M_H__
