#include "Application.h"
#include <iostream>
#include <string>

using namespace std;


Application::Application(){
	cout << "Start";
}

Application::~Application() {
	return;
}

int Application::run()
{
	bool exit = false;
	while (!exit) {
		input.readConsole();
		log.dumpLog();s
		/*
		string in;
		in = "hello";
		cin >> in;
		if (in == "exit") {
			exit = true;
		}
		else {
			cout << in;
			cout << "\n";
		}
	}*/
	return 0;
}