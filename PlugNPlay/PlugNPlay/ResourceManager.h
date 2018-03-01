
class ResourceManager {
private:
	ResourceManager() {};
public:
	static ResourceManager& getInstance() {
		static ResourceManager instance;
		return instance;
	}
	ResourceManager(ResourceManager const&) = delete;
	void operator=(ResourceManager const&) = delete;
};