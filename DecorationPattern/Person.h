#pragma once
#ifndef _PERSON_H__
#define _PERSON_H__

#include <iostream>
#include <string>
#include "IFashionShow.h"

class Person :public IFashionShow
{
public:
	Person(const std::string& name) { m_pName = name; }
	virtual ~Person() {};

public:
	virtual void Show() const override
	{
		std::cout << "×°°çµÄ" << m_pName << std::endl;
		return;
	}

private:
	std::string m_pName;
};
#endif // !_PERSON_H__
