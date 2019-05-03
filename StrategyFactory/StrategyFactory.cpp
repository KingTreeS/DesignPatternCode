#include "pch.h"
#include <iostream>
#include "CashContext.h"

int main()
{
	while (true)
	{
		std::string cashOpera;
		std::cout << "请输入优惠操作（NORMAL、REBATE、RETURN，“Q”to exit）：\n";
		std::cin >> cashOpera;

		if (cashOpera != "Q" && cashOpera != "q")
		{
			if (cashOpera.size())
			{
				int money;
				std::cout << "请输入原价：" << std::endl;
				std::cin >> money;
				std::cin.clear();

				CashContext cashContext(cashOpera);
				cashContext.GetResult(money);

			}
			else
			{
				std::cout << "输入不允许为空" << std::endl;
			}
		}
		else
		{
			break;
		}

	}

	return 0;
}