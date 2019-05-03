#pragma once
#ifndef _TEST_PAPER_B_H__
#define _TEST_PAPER_B_H__

#include <iostream>
#include "TestPaper.h"

class TestPaperB :public TestPaper
{
public:
	TestPaperB() {};
	virtual ~TestPaperB() {};

protected:
	virtual void Answer1() override { std::cout << "d" << std::endl; }
	virtual void Answer2() override { std::cout << "b" << std::endl; }
	virtual void Answer3() override { std::cout << "d" << std::endl; }

};
#endif // !_TEST_PAPER_A_H__
