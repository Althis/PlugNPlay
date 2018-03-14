#include <istream>
#include <string>
#include "Log.h"


class Input {
public:
	static Input& getInstance() {
		static Input instance;
		return instance;
	}
	void readConsole();
private:
	Input() {};
	std::string lastInput;
	Log& log = Log::getInstance();

public:
	Input(Input const&) = delete;
	void operator=(Input const&) = delete;
};