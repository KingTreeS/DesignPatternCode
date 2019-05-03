#pragma once
#ifndef _PERSON_BUILDER_H__
#define _PERSON_BUILDER_H__

class PersonBuilder
{
public:
	PersonBuilder() {};
	virtual ~PersonBuilder() {};

public:
	virtual void BuildHead() = 0;
	virtual void BuildBody() = 0;
	virtual void BuildArm() = 0;
	virtual void BuildHand() = 0;
	virtual void BuildLeg() = 0;
	virtual void BuildFeet() = 0;

};
#endif // !_PERSON_BUILDER_H__
