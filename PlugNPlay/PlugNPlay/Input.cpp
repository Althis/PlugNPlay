#include "Input.h"

void Input::readConsole() {
	std::cin >> lastInput;
	log.log(lastInput);
}