#pragma once
#ifndef _SCHOOL_GIRL_H__
#define _SCHOOL_GIRL_H__

#include <string>

class SchoolGirl
{
public:
	SchoolGirl() {};
	virtual ~SchoolGirl() {};

public:
	void SetName(const std::string& name) { m_pName = name; }
	std::string GetName() const { return m_pName; }

private:
	std::string m_pName;

};
#endif // !_SCHOOL_GIRL_H__
