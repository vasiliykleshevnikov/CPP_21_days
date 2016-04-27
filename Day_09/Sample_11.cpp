#include <iostream>

using namespace std;

class SimpleCat {
public:
	SimpleCat();
	SimpleCat(SimpleCat&);
	~SimpleCat();

	int getAge() const {
		return itsAge;
	}
	void setAge(int age) {
		itsAge = age;
	}
private:
	int itsAge;
};

SimpleCat::SimpleCat() {
	cout << "SimpleCat Constructor..." << endl;
	itsAge = 1;
}

SimpleCat::SimpleCat(SimpleCat&) {
	cout << "SimpleCat Copy Constructor..." << endl;
}

SimpleCat::~SimpleCat() {
	cout << "SimpleCat Destructor..." << endl;
}

const SimpleCat& FunctionTwo(const SimpleCat &rCat);

int main() {
	cout << "Making a cat..." << endl;
	SimpleCat Frisky;
	cout << "Frisky age is: " << Frisky.getAge() << endl;
	Frisky.setAge(5);
	cout << "Frisky age is: " << Frisky.getAge() << endl;
	cout << "Called FunctionTwo..." << endl;
	FunctionTwo(Frisky);
	return 0;
}

const SimpleCat& FunctionTwo(const SimpleCat &rCat) {
	cout << "FunctionTwo..." << endl;
	cout << "Frisky age is: " << rCat.getAge() << endl;
	return rCat;
}

