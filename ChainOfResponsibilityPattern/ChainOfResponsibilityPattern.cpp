#include "pch.h"
#include <iostream>
#include "Request.h"
#include "Manager.h"
#include "CommonManager.h"
#include "Majordomo.h"
#include "GeneralManager.h"

int main()
{
	Request request;
	request.SetRequestType("请假");
	request.SetRequestContext("身体不适");
	request.SetRequestNumber(7);

	CommonManager commonManager("王经理");
	Majordomo majordomo("李总监");
	GeneralManager generalManager("黄总经理");

	commonManager.SetManager(&majordomo);
	majordomo.SetManager(&generalManager);

	commonManager.RequestApplications(request);

	return 0;
}