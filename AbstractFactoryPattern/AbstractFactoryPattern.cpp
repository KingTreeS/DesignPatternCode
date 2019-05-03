#include "pch.h"
#include <iostream>
#include "DataAccess.h"
#include "IUser.h"
#include "IDepartment.h"

int main()
{
	IUser* user = DataAccess::CreateUser();
	IDepartment* department = DataAccess::CreateDepartment();

	user->Insert();
	user->GetUserInfo(1);

	department->Insert();
	department->GetDepartmentInfo(4);

	return 0;
}