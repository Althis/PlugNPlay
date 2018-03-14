#include <fstream>
#include "System.h"

class Settings: public System{
public:
	static Settings& getInstance() {
		static Settings instance;
		return instance;
	}
	void init();
	void init(std::string path);
	void changeSettings();
private:
	Settings() {};
public:
	Settings(Settings const&) = delete;
	void operator=(Settings const&) = delete;
};