#pragma once
#ifndef _OPERATION_SUB_H__
#define _OPERATION_SUB_H__

#include "Operation.h"

class OperationSub :public Operation
{
public:
	OperationSub() {};
	virtual ~OperationSub() {};

private:
	virtual int GetResult() const override { return m_pNumA - m_pNumB; }

};
#endif // !_OPERATION_SUB_H__

