#pragma once
#ifndef _OPERATION_H__
#define _OPERATION_H__

class Operation
{
public:
	Operation() {};
	virtual ~Operation() {};

public:
	virtual int GetResult() const = 0;
	
public:
	void SetNum(int num_a, int num_b) 
	{ 
		m_Num_a = num_a; 
		m_Num_b = num_b;
	}

protected:
	int m_Num_a;
	int m_Num_b;
};
#endif // !_OPERATION_H__

