#include "pch.h"
#include <iostream>
#include "ConcreteCompany.h"
#include "HRDepartment.h"
#include "FinanceDepartment.h"

int main()
{
	ConcreteCompany root("北京总公司");
	root.Add(new HRDepartment("总公司人力资源部"));
	root.Add(new FinanceDepartment("总公司财务部"));

	ConcreteCompany comp("上海华东分公司");
	comp.Add(new HRDepartment("华东分公司人力资源部"));
	comp.Add(new FinanceDepartment("华东分公司财务部"));
	root.Add(&comp);

	ConcreteCompany comp1("南京办事处");
	comp1.Add(new HRDepartment("南京办事处人力资源部"));
	comp1.Add(new FinanceDepartment("南京办事处财务部"));
	comp.Add(&comp1);

	ConcreteCompany comp2("杭州办事处");
	comp2.Add(new HRDepartment("杭州办事处人力资源部"));
	comp2.Add(new FinanceDepartment("杭州办事处财务部"));
	comp.Add(&comp2);

	std::cout << "结构图：" << std::endl;
	root.Display(1);

	std::cout << "\n" << "职责：" << std::endl;
	root.LineOfDuty();

	/*comp.Remove(&comp1);

	std::cout << "结构图：" << std::endl;
	root.Display(1);

	std::cout << "\n" << "职责：" << std::endl;
	root.LineOfDuty();*/

	return 0;
}