#pragma once
#ifndef _PERSON_H__
#define _PERSON_H__

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person() {};
	virtual ~Person() {};

public:
	void setHead(string head) { m_pHead = head; }
	void setBody(string body) { m_pBody = body; }
	void setArm(string arm) { m_pArm = arm; }
	void setHand(string hand) { m_pHand = hand; }
	void setLeg(string leg) { m_pLeg = leg; }
	void setFeet(string feet) { m_pFeet = feet; }

public:
	void Show()
	{
		std::cout << "ÈË£º" << "\n"
			<< m_pHead << "\n"
			<< m_pBody << " " << m_pArm << " " << m_pHand << "\n"
			<< m_pLeg << " " << m_pFeet << "\n";
	}

private:
	string		m_pHead;
	string		m_pBody;
	string		m_pArm;
	string		m_pHand;
	string		m_pLeg;
	string		m_pFeet;

};
#endif // !_PERSON_H__

