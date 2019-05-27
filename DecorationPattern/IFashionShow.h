#pragma once
#ifndef _IFASHION_SHOW_H__
#define _IFASHION_SHOW_H__

#include <iostream>

class IFashionShow
{
public:
	IFashionShow() {};
	virtual ~IFashionShow() {};

public:
	virtual void Show() const = 0;

};
#endif // !_IFASHION_SHOW_H__
