#include "pch.h"
#include <iostream>
#include "BossSubject.h"
#include "NBAObserver.h"
#include "StockObserver.h"

int main()
{
	BossSubject subject("BigTree");

	NBAObserver observer1(&subject, "Lu");
	NBAObserver observer2(&subject, "Wang");
	NBAObserver observer3(&subject, "Yang");

	StockObserver observer4(&subject, "Li");

	subject.Attach(&observer1);
	subject.Attach(&observer2);
	subject.Attach(&observer3);
	subject.Attach(&observer4);

	subject.Notify();

	return 0;
}