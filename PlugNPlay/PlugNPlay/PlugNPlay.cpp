// PlugNPlay.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Settings.h"

int main()
{
	Settings& settings = Settings::getInstance();
	settings.init();
	return 0;
};