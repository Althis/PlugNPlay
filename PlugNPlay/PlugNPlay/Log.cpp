#include "Log.h"

void Log::log(std::string line) {
	lastLine = line;
}

void Log::dumpLog() {
	std::cout << lastLine;
}