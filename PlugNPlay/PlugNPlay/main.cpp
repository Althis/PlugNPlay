#include "stdafx.h"
#include <iostream>
#include <string>
#include "Application.h"
using namespace std;

int main() {
	Application * app = new Application();
	app->run();
	delete app;
	return 0;
}