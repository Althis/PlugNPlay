#include "Settings.h"
#include <iostream>
using namespace std;

void Settings::init(){
	std::ifstream reader;
	if (!reader) {
		cout << "File not found";
	}
	reader.open("../config.ini");
	std::string line = "";
	std::string x;
}