#include <iostream>

using namespace std;

class Cat {
public:
	Cat();
	Cat(const Cat & cat);
	~Cat();
	int getAge() const {
		return *itsAge;
	}
	int getWeight() const {
		return *itsWeight;
	}
	void setAge(int age) {
		*itsAge = age;
	}
private:
	int * itsAge;
	int * itsWeight;
};

Cat::Cat() {
	itsAge = new int;
	itsWeight = new int;
	*itsAge = 5;
	*itsWeight = 9;
}

Cat::Cat(const Cat & rCat) {
	itsAge = new int;
	itsWeight = new int;
	*itsAge = rCat.getAge();
	*itsWeight = *(rCat.itsWeight);
}

Cat::~Cat() {
	delete itsAge;
	itsAge = 0;
	delete itsWeight;
	itsWeight = 0;
}

int main() {
	Cat Frisky;
	cout << "Frisky age: " << Frisky.getAge() << endl;
	cout << "Setting Frisky to 6..." << endl;
	Frisky.setAge(6);
	cout << "Creating Boots from Frisky" << endl;
	Cat Boots(Frisky);
	cout << "Frisky age: " << Frisky.getAge() << endl;
	cout << "Boots age: " << Boots.getAge() << endl;
	cout << "Setting Frisky to 7..." << endl;
	Frisky.setAge(7);
	cout << "Frisky age: " << Frisky.getAge() << endl;
	cout << "Boots age: " << Boots.getAge() << endl;
	return 0;
}

