﻿#include "pch.h"
#include <iostream>
#include "TestPaper.h"
#include "TestPaperA.h"
#include "TestPaperB.h"

int main()
{
	TestPaper* test1 = new TestPaperA();
	TestPaper* test2 = new TestPaperB();

	test1->Question1();
	test1->Question2();
	test1->Question3();

	test2->Question1();
	test2->Question2();
	test2->Question3();

	return 0;
}