#pragma once
#ifndef _BOSS_SUBJECT_H__
#define _BOSS_SUBJECT_H__

#include <string>
#include <iostream>
#include "Subject.h"

class BossSubject :public Subject
{
public:
	BossSubject(const std::string name) :Subject(name) {};
	virtual ~BossSubject() {};

public:
	virtual void Notify() override
	{
		for (auto observer : m_pObserverList)
		{
			std::cout << "通知：" << m_pSubjectName << "老板来了" << std::endl;
			observer->Update();
		}
	}
};
#endif // !_BOSS_SUBJECT_H__
