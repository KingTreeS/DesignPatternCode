#pragma once
#ifndef _BARBECUER_H__
#define _BARBECUER_H__

#include <iostream>

class Barbecuer
{
public:
	Barbecuer() {};
	virtual ~Barbecuer() {};

public:
	void BakeChickenWing()
	{
		std::cout << "¿¾¼¦³á" << std::endl;
	}

	void BakeMutton()
	{
		std::cout << "¿¾ÑòÈâ´®" << std::endl;
	}

};
#endif // !_BARBECUER_H__
