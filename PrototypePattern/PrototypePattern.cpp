﻿#include "pch.h"
#include <iostream>
#include "Resume.h"

int main()
{
	Resume resume("BigTree");
	resume.SetPersonalInfo(26, "男");
	resume.SetWorkExperience(100, "Microsoft");

	Resume* resume2 = resume.Clone();
	resume2->SetWorkExperience(28, "male");

	resume.Show();
	resume2->Show();

	return 0;
}