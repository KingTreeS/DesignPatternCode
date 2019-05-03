#pragma once
#ifndef _AGGREGATE_H__
#define _AGGREGATE_H__

template<typename T>
class Aggregate
{
public:
	Aggregate() {};
	virtual ~Aggregate() {};

public:
	virtual int Count() = 0;
	virtual void Push(const T& val) = 0;
	virtual T& Pop(int index) = 0;

};
#endif // !_AGGREGATE_H__
