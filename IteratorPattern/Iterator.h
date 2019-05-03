#pragma once
#ifndef _ITERATOR_H__
#define _ITERATOR_H__

template<typename T>
class Iterator
{
public:
	Iterator() {};
	virtual ~Iterator() {};

public:
	virtual T First() = 0;
	virtual T Next() = 0;
	virtual bool IsDone() = 0;
	virtual T CurrentItem() = 0;

};
#endif // !_ITERATOR_H__
