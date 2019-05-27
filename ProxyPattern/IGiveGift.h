#pragma once
#ifndef _IGIVE_GIFT_H__
#define _IGIVE_GIFT_H__

class IGiveGift
{
public:
	IGiveGift() {};
	virtual ~IGiveGift() {};

public:
	virtual void GiveDolls() const = 0;
	virtual void GiveFlowers() const = 0;
	virtual void GiveChocolate() const = 0;

};
#endif // !_IGIVE_GIFT_H__
