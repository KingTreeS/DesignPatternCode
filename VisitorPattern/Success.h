#pragma once
#ifndef _SUCCESS_H__
#define _SUCCESS_H__

#include <iostream>
#include "Action.h"

class Success :public Action
{
public:
	Success() {};
	virtual ~Success() {};

public:
	virtual void GetMaleAction() override
	{
		std::cout << "��������һ��ΰ���Ů��" << std::endl;
	}

	virtual void GetFemaleAction() override
	{
		std::cout << "��������һ��ʧ�ܵ�����" << std::endl;
	}

};
#endif // !_SUCCESS_H__
