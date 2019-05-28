#pragma once
#ifndef _ITERATOR_H__
#define _ITERATOR_H__

class Iterator
{
public:
	Iterator() {};
	virtual ~Iterator() {};

public:
	virtual std::string First() = 0;
	virtual std::string Next() = 0;
	virtual bool IsDone() = 0;
	virtual std::string CurrentItem() = 0;

};
#endif // !_ITERATOR_H__
