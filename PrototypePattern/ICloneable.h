#pragma once
#ifndef _ICLONEABLE_H__
#define _ICLONEABLE_H__

template <typename T>
class ICloneable
{
protected:
	virtual T* Clone() const = 0;

};
#endif // !_PROTOTYPE_H__
