#pragma once
#ifndef _TEST_PAPER_A_H__
#define _TEST_PAPER_A_H__

#include <iostream>
#include "TestPaper.h"

class TestPaperA :public TestPaper
{
public:
	TestPaperA() {};
	virtual ~TestPaperA() {};

protected:
	virtual void Answer1() override { std::cout << "a" << std::endl; }
	virtual void Answer2() override { std::cout << "c" << std::endl; }
	virtual void Answer3() override { std::cout << "d" << std::endl; }

};
#endif // !_TEST_PAPER_A_H__
