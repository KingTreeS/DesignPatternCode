#pragma once
#ifndef _RESUME_H__
#define _RESUME_H__

#include <iostream>
#include <string>
#include "ICloneable.h"
#include "WorkExperience.h"

class Resume :public ICloneable<Resume>
{
public:
	Resume(const std::string& name)
	{
		m_pName = name;
		m_pWorkExperience = new WorkExperience();
	}
	virtual ~Resume()
	{
		if (m_pWorkExperience != nullptr)
		{
			delete m_pWorkExperience;
			m_pWorkExperience = nullptr;
		}
	}

public:
	void SetPersonalInfo(const int age, const std::string sex)
	{
		SetAge(age);
		SetSex(sex);
	}

	void SetWorkExperience(const int date, const std::string company)
	{
		if (m_pWorkExperience == nullptr)
		{
			std::cerr << "未初始化工作信息" << std::endl;
			return;
		}
		m_pWorkExperience->SetWorkDate(date);
		m_pWorkExperience->SetWorkCompany(company);
	}

	void Show() const
	{
		std::cout << "姓名：" << m_pName << "\n"
			<< "年龄：" << GetAge() << "\n"
			<< "性别：" << GetSex() << "\n"
			<< "工作时间：" << GetWorkExperience()->GetWorkDate() << "\n"
			<< "公司名称：" << GetWorkExperience()->GetWorkCompany() << "\n";
	}

public:
	virtual Resume* Clone() const override
	{
		Resume* tmp = new Resume(*this);
		tmp->m_pWorkExperience = m_pWorkExperience->Clone();
		return tmp;
	}

private:
	void SetAge(const int age) { m_pAge = age; }
	int GetAge() const { return m_pAge; }
	void SetSex(const std::string& sex) { m_pSex = sex; }
	std::string GetSex() const { return m_pSex; }
	WorkExperience* GetWorkExperience() const
	{
		if (m_pWorkExperience == nullptr)
		{
			std::cerr << "未初始化工作信息" << std::endl;
			return nullptr;
		}
		return m_pWorkExperience;
	}


private:
	std::string m_pName;
	int m_pAge;
	std::string m_pSex;
	WorkExperience* m_pWorkExperience;
};
#endif // !_RESUME_H__
