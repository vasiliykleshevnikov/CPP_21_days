#include <iostream>

using namespace std;

class Cat {
public:
	Cat();
	int getAge() const {
		return *itsAge;
	}
	int getWeight() const {
		return *itsWeight;
	}
	void setAge(int age) {
		*itsAge = age;
	}
	void setWeight(int weight) {
		*itsWeight = weight;
	}
	Cat& operator =(const Cat &);
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

Cat& Cat::operator =(const Cat & rhs) {
	if (this == &rhs)
		return *this;
	*itsAge = rhs.getAge();
	*itsWeight = rhs.getWeight();
	return *this;
}

int main() {
	Cat frisky;
	cout << "Frisky age: " << frisky.getAge() << endl;
	cout << "Setting Frisky to 6..." << endl;
	frisky.setAge(6);
	Cat Whiskers;
	cout << "Whiskers age: " << Whiskers.getAge() << endl;
	cout << "Coping Frisky to Whiskers..." << endl;
	Whiskers = frisky;
	cout << "Whiskers age: " << Whiskers.getAge() << endl;

	return 0;
}

