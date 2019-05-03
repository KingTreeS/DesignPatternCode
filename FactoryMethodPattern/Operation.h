#pragma once
#ifndef _OPERATION_H__
#define _OPERATION_H__

class Operation
{
public:
	Operation() {};
	virtual ~Operation() {};

public:
	void SetNum(const int num_a, const int num_b)
	{
		m_pNumA = num_a;
		m_pNumB = num_b;
	}

public:
	virtual int GetResult() const = 0;

protected:
	int m_pNumA;
	int m_pNumB;
};
#endif // !_OPERATION_H__


