#pragma once
#ifndef _OPERATION_ADD_H__
#define _OPERATION_ADD_H__

#include "Operation.h"

class OperationAdd :public Operation
{
public:
	OperationAdd() {};
	virtual ~OperationAdd() {};

private:
	virtual int GetResult() const override { return m_pNumA + m_pNumB; }

};
#endif // !_OPERATION_ADD_H__
