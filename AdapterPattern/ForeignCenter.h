#pragma once
#ifndef  _FOREIGN_CENTER_H__
#define _FOREIGN_CENTER_H__

#include <iostream>

class ForeignCenter
{
public:
	ForeignCenter() {};
	virtual ~ForeignCenter() {};

public:
	void ForeignAttack() { std::cout << "����з湥��" << std::endl; }
	void ForeignDefense() { std::cout << "����з����" << std::endl; }

};
#endif // ! _FOREIGN_CENTER_H__
