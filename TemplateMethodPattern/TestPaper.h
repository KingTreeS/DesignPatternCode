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
		std::cout << "杨过得到了什么？\n"
			<< "a.铸铁 b.马口铁 c.高速合金钢 d.碳素纤维"
			<< std::endl;

		Answer1();
	}

	void Question2()
	{
		std::cout << "小龙女得到了什么？\n"
			<< "a.铸铁 b.马口铁 c.高速合金钢 d.碳素纤维"
			<< std::endl;

		Answer2();
	}

	void Question3()
	{
		std::cout << "郭靖得到了什么？\n"
			<< "a.铸铁 b.马口铁 c.高速合金钢 d.碳素纤维"
			<< std::endl;

		Answer3();
	}

protected:
	virtual void Answer1() = 0;
	virtual void Answer2() = 0;
	virtual void Answer3() = 0;

};
#endif // !_TEST_PAPER_H__
