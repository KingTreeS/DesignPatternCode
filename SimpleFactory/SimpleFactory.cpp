#include "pch.h"
#include <iostream>
#include "Operation.h"
#include "OperationFactory.h"

using namespace std;

int main()
{
	int num_a;
	int num_b;
	char operate;

	cout << "请输入数A：" << endl;
	cin >> num_a;

	cout << "请输入运算符：" << endl;
	cin >> operate;

	cout << "请输入数B：" << endl;
	cin >> num_b;

	Operation* operation = OperationFactory::CreateOperation(operate);
	operation->SetNum(num_a, num_b);

	int result = operation->GetResult();

	cout << "最终结果：" << result << endl;

	if (operation != nullptr)
	{
		delete operation;
		operation = nullptr;
	}

	return 0;
}