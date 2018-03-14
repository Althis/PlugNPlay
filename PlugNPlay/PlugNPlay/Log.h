#include <ostream>
#include <string>

class Log {
private:
	std::string lastLine;
	Log() {};
public:
	static Log& getInstance() {
		static Log instance;
		return instance;
	}
	Log(Log const&) = delete;
	void operator=(Log const&) = delete;
	void dumpLog();
	void log(std::string line);
};