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
		std::cout << "�����ֻ�ͨѶ¼" << std::endl;
	}

};
#endif // !_HANDSET_ADDRESS_LIST_H__

