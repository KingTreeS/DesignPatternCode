#pragma once
#ifndef _FINERY_H__
#define _FINERY_H__

#include "IFashionShow.h"

class Finery :public IFashionShow
{
public:
	Finery() {};
	virtual ~Finery() {};

protected:
	virtual void Show() const override = 0;
};
#endif // !_FINERY_H__
