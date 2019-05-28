#include "pch.h"
#include <iostream>
#include "BossSubject.h"
#include "NBAObserver.h"
#include "StockObserver.h"

int main()
{
	BossSubject subject("BigBoss");

	NBAObserver observer1("Lu");
	NBAObserver observer2("Wang");
	NBAObserver observer3("Yang");
	StockObserver observer4("Li");

	subject.Attach(&observer1);
	subject.Attach(&observer2);
	subject.Attach(&observer3);
	subject.Attach(&observer4);

	subject.Notify();

	return 0;
}