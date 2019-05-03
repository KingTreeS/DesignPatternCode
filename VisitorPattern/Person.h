#pragma once
#ifndef _PERSON_H__
#define _PERSON_H__

class Action;

class Person
{
public:
	Person() {};
	virtual ~Person() {};

public:
	virtual void Accept(Action* action) = 0;

};
#endif // !_PERSON_H__
