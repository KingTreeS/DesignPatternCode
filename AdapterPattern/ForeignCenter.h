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
	void ForeignAttack() { std::cout << "外国中锋攻击" << std::endl; }
	void ForeignDefense() { std::cout << "外国中锋防守" << std::endl; }

};
#endif // ! _FOREIGN_CENTER_H__
