#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Settings
{
public:
	static Settings& getInstance()
	{
		static Settings instance;
		return instance;
	}
	int init() {
		fstream reader;
		reader.open("config.ini");
		if (!reader) {
			return 1;
		}
		else {
			string setting;
			string data;
			while (reader >> setting >> data) {
				setSetting(setting, data);
			}
		}
		return 0;
	}
	void setSetting(string settingName, string data) {};
private:
	Settings() {}
public:
	Settings(Settings const&) = delete;
	void operator=(Settings const&) = delete;
};