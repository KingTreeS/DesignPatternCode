#include "pch.h"
#include <iostream>
#include "User.h"
#include "WebsiteFactory.h"
#include "Website.h"

int main()
{
	WebsiteFactory factory;

	Website* website1 = factory.GetWebsiteCategory("产品展示");
	website1->Use(new User("小菜"));

	Website* website2 = factory.GetWebsiteCategory("产品展示");
	website2->Use(new User("大鸟"));

	Website* website3 = factory.GetWebsiteCategory("博客");
	website3->Use(new User("小花"));

	Website* website4 = factory.GetWebsiteCategory("产品展示");
	website4->Use(new User("小王"));

	Website* website5 = factory.GetWebsiteCategory("主页");
	website5->Use(new User("大东"));

	factory.GetWebsiteCount();

	return 0;
}