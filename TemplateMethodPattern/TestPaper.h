#pragma once
#ifndef _TEST_PAPER_H__
#define _TEST_PAPER_H__

#include <iostream>

class TestPaper
{
public:
	TestPaper() {};
	virtual ~TestPaper() {};

public:
	void Question1()
	{
		std::cout << "����õ���ʲô��\n"
			<< "a.���� b.����� c.���ٺϽ�� d.̼����ά"
			<< std::endl;

		Answer1();
	}

	void Question2()
	{
		std::cout << "С��Ů�õ���ʲô��\n"
			<< "a.���� b.����� c.���ٺϽ�� d.̼����ά"
			<< std::endl;

		Answer2();
	}

	void Question3()
	{
		std::cout << "�����õ���ʲô��\n"
			<< "a.���� b.����� c.���ٺϽ�� d.̼����ά"
			<< std::endl;

		Answer3();
	}

protected:
	virtual void Answer1() = 0;
	virtual void Answer2() = 0;
	virtual void Answer3() = 0;

};
#endif // !_TEST_PAPER_H__
