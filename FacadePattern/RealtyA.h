#pragma once
#ifndef _REALTY_A_H__
#define _REALTY_A_H__

#include <iostream>

class RealtyA
{
public:
	RealtyA() {};
	virtual ~RealtyA() {};

public:
	void sell() { std::cout << "���ز�A����" << std::endl; }
	void buy() { std::cout << "���ز�A����" << std::endl; }

};
#endif // !_REALTY_A_H__

