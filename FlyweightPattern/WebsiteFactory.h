#pragma once
#ifndef _WEBSITE_FACTORY_H__
#define _WEBSITE_FACTORY_H__

#include <map>
#include <string>
#include <iostream>
#include "Website.h"
#include "ConcreteWebsite.h"

class WebsiteFactory
{
public:
	WebsiteFactory() {};
	virtual ~WebsiteFactory() 
	{
		if (!m_pWebsiteList.empty())
		{
			for (auto delItem : m_pWebsiteList)
			{
				delete delItem.second;
				delItem.second = nullptr;
			}
			m_pWebsiteList.clear();
		}
	}

public:
	Website* GetWebsiteCategory(std::string key)
	{
		if (m_pWebsiteList.count(key) == 0)
		{
			m_pWebsiteList[key] = new ConcreteWebsite(key);
		}
		return m_pWebsiteList[key];
	}

	void GetWebsiteCount() const
	{
		std::cout << "网站分类总数：" << m_pWebsiteList.size() << std::endl;
	}

private:
	std::map<std::string, Website*> m_pWebsiteList;

};
#endif // !_WEBSITE_FACTORY_H__

