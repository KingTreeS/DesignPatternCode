#include "pch.h"
#include <iostream>
#include "UnitedNationsSecurityCouncil.h"
#include "America.h"
#include "Iraq.h"

int main()
{
	UnitedNationsSecurityCouncil securityCouncil;
	America america;
	Iraq iraq;

	america.SetMediator(&securityCouncil);
	iraq.SetMediator(&securityCouncil);
	securityCouncil.SetAmerica(&america);
	securityCouncil.SetIraq(&iraq);

	america.SendMessage("不准研制核武器，否则发动战争！");
	iraq.SendMessage("我们没有核武器，也不怕侵略！");

	return 0;
}