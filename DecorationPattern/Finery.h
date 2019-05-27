#pragma once
#ifndef _FINERY_H__
#define _FINERY_H__

#include "IFashionShow.h"

class Finery :public IFashionShow
{
public:
	Finery() {};
	virtual ~Finery() {};

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

protected:
	virtual void Show() const override = 0;

protected:
	const IFashionShow* m_pBase;

};
#endif // !_FINERY_H__
