#include "Input.h"
#include "Log.h"

class Application {
public:
	Application();
	virtual ~Application();
	int run();
private:
	Input& input = Input::getInstance();
	Log& log = Log::getInstance();
};