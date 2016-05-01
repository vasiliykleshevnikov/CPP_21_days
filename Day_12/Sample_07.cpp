#include <iostream>

using namespace std;

class Mammal {
public:
	Mammal() :
		itsAge(1) {
		cout << "Mammal constructor..." << endl;
	}
	virtual ~Mammal() {
		cout << "Mammal destructor..." << endl;
	}

	virtual void speak() const {
		cout << "Mammal sound!" << endl;
	}
	void move() const {
		cout << "Mammal move()" << endl;
	}
protected:
	int itsAge;
};

class Dog: public Mammal {
public:
	Dog() {
		cout << "Dog constructor..." << endl;
	}
	virtual ~Dog() {
		cout << "Dog destructor..." << endl;
	}

	void wagTail() const {
		cout << "Tail wagging..." << endl;
	}

	void speak() const {
		cout << "Woof!" << endl;
	}
	void move() const {
		cout << "Dog move()" << endl;
	}
};

int main() {
	Mammal * pDog = new Dog;
	pDog->move();
	pDog->speak();

	return 0;
}

