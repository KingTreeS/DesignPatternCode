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
	virtual void SetDecoration(const IFashionShow* base)
	{
		if (base == nullptr)
		{
			std::cerr << "未传入被装饰对象" << std::endl;
			return;
		}

		m_pBase = base;
	}

public:
	virtual void Show() const = 0;

protected:
	const IFashionShow* m_pBase;
};
#endif // !_IFASHION_SHOW_H__
