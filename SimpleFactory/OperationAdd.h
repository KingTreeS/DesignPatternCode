#pragma once
#ifndef _OPERATION_ADD_H__
#define _OPERATION_ADD_H__

#include "Operation.h"

class OperationAdd :public Operation
{
public:
	OperationAdd() {};
	virtual ~OperationAdd() {};

protected:
	virtual int GetResult() const override { return m_Num_a + m_Num_b; }
};
#endif // !_OPERATION_ADD_H__

