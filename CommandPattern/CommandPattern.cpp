#include "pch.h"
#include <iostream>
#include "Barbecuer.h"
#include "Waiter.h"
#include "Command.h"
#include "BakeMuttonCommand.h"
#include "BakeChickenWingCommand.h"

int main()
{
	Barbecuer barbecuer;
	Waiter waiter;

	BakeMuttonCommand muttonCommand(barbecuer);
	BakeChickenWingCommand chickenWingCommand(barbecuer);
	BakeMuttonCommand muttonCommand1(barbecuer);
	BakeChickenWingCommand chickenWingCommand1(barbecuer);
	BakeMuttonCommand muttonCommand2(barbecuer);
	BakeChickenWingCommand chickenWingCommand2(barbecuer);

	waiter.SetCommand(&muttonCommand);
	waiter.SetCommand(&chickenWingCommand);
	waiter.SetCommand(&muttonCommand1);
	waiter.SetCommand(&muttonCommand2);
	waiter.SetCommand(&chickenWingCommand1);
	waiter.SetCommand(&chickenWingCommand2);

	waiter.CancelCommand(&muttonCommand2);

	waiter.Notify();

	return 0;
}