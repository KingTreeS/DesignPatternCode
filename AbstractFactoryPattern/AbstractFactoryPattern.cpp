#include "pch.h"
#include <iostream>
#include "IUser.h"
#include "IDepartment.h"
#include "DataAccess.h"

//抽象工厂方法结合简单工厂模式，只定义一个工厂类
int main()
{
	IUser* user = DataAccess::CreateUser();
	IDepartment* department = DataAccess::CreateDepartment();

	user->Insert();
	user->GetUserInfo(1);

	department->Insert();
	department->GetDepartmentInfo(4);

	if (user != nullptr)
	{
		delete user;
		user = nullptr;
	}
	if (department != nullptr)
	{
		delete department;
		department = nullptr;
	}

	return 0;
}