#pragma once
#ifndef _WORK_EXPERIENCE_H__
#define _WORK_EXPERIENCE_H__

#include <string>
#include "ICloneable.h"

class WorkExperience :public ICloneable<WorkExperience>
{
public:
	WorkExperience() {};
	virtual ~WorkExperience() {};

public:
	void SetWorkDate(const int date) { m_pDate = date; }
	int GetWorkDate() const { return m_pDate; }
	void SetWorkCompany(const std::string& company) { m_pCompany = company; }
	std::string GetWorkCompany() const { return m_pCompany; }

	virtual WorkExperience* Clone() const override
	{
		return new WorkExperience(*this);
	}

private:
	int m_pDate;
	std::string m_pCompany;

};
#endif // !_WORK_EXPERIENCE_H__
