#include <fstream>
#include "System.h"

class ResourceManager: public System{
public:
	static ResourceManager& getInstance() {
		static ResourceManager instance;
		return instance;
	}
	void init();
private:
	ResourceManager() {};
public:
	ResourceManager(ResourceManager const&) = delete;
	void operator=(ResourceManager const&) = delete;
};