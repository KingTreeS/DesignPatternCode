#pragma once
#ifndef _HANDSET_ADDRESS_LIST_H__
#define _HANDSET_ADDRESS_LIST_H__

#include <iostream>
#include "HandsetSoft.h"

class HandsetAddressList :public HandsetSoft
{
public:
	HandsetAddressList() {};
	virtual ~HandsetAddressList() {};

public:
	virtual void Run() override
	{
		std::cout << "运行手机通讯录" << std::endl;
	}

};
#endif // !_HANDSET_ADDRESS_LIST_H__

