#pragma once
#ifndef _OPERATION_SUB_H__
#define _OPERATION_SUB_H__

#include "Operation.h"

class OperationSub :public Operation
{
public:
	OperationSub() {};
	virtual ~OperationSub() {};

protected:
	virtual int GetResult() const override { return m_Num_a - m_Num_b; }
};
#endif // !_OPERATION_SUB_H__
