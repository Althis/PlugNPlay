class Associations {
public:
	static Associations& getInstance() {
		static Associations instance;
		return instance;
	}
	bool addAssociation();
private:
	Associations() {};

public:
	Associations(Associations const&) = delete;
	void operator=(Associations const&) = delete;
};