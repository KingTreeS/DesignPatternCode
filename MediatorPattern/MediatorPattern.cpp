#include "pch.h"
#include <iostream>
#include "UnitedNationsSecurityCouncil.h"
#include "America.h"
#include "Iraq.h"

int main()
{
	America america;
	Iraq iraq;
	UnitedNationsSecurityCouncil securityCouncil;

	securityCouncil.SetCountryAmerica(&america);
	securityCouncil.SetCountryIraq(&iraq);

	securityCouncil.SendMessage(CountryInfo::AMERICA, "不准研制核武器，否则发动战争！");
	securityCouncil.SendMessage(CountryInfo::IRAQ, "我们没有核武器，也不怕侵略！");

	return 0;
}