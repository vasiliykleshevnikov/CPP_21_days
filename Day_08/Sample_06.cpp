#include <iostream>

using namespace std;

class SimpleCat {
public:
	SimpleCat() { itsAge = 2; }
	~SimpleCat() {}
	int getAge() const { return itsAge; }
	void setAge(int age) { itsAge = age; }
private:
	int itsAge;
};

int main() {
	SimpleCat * Frisky = new SimpleCat;
	cout << "Frisky is " << Frisky->getAge() << endl;
	Frisky->setAge(5);
	cout << "Frisky is " << Frisky->getAge() << endl;
	delete Frisky;

	return 0;
}

