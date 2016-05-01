#include <iostream>

using namespace std;

class Mammal {
public:
	Mammal() :
		itsAge(1) {
		cout << "Mammal constructor..." << endl;
	}
	Mammal(const Mammal &rhs);
	virtual ~Mammal() {
		cout << "Mammal destructor..." << endl;
	}

	virtual void speak() const {
		cout << "Mammal sound!" << endl;
	}
	virtual Mammal * clone() {
		return new Mammal(*this);
	}
	int getAge() const {
		return itsAge;
	}
protected:
	int itsAge;
};

Mammal::Mammal(const Mammal & rhs) :
	itsAge(rhs.getAge()) {
	cout << "Mammal Copy Constructor..." << endl;
}

class Dog: public Mammal {
public:
	Dog() {
		cout << "Dog Constructor..." << endl;
	}
	Dog(const Dog &rhs);
	virtual ~Dog() {
		cout << "Dog destructor..." << endl;
	}
	void speak() const {
		cout << "Woof!" << endl;
	}
	virtual Mammal* clone() {
		return new Dog(*this);
	}
};

Dog::Dog(const Dog & rhs) :
	Mammal(rhs) {
	cout << "Dog Copy Constructor..." << endl;
}

class Cat: public Mammal {
public:
	Cat() {
		cout << "Cat Constructor..." << endl;
	}
	Cat(const Cat &rhs);
	virtual ~Cat() {
		cout << "Cat destructor..." << endl;
	}
	void speak() const {
		cout << "Meow!" << endl;
	}
	virtual Mammal* clone() {
		return new Cat(*this);
	}
};

Cat::Cat(const Cat & rhs) :
	Mammal(rhs) {
	cout << "Cat Copy Constructor..." << endl;
}

enum ANIMALS {
	MAMMAL, DOG, CAT
};
const int numAnimalTypes = 3;

int main() {
	Mammal *theArray[numAnimalTypes];
	Mammal * ptr;
	int choise;

	for (int i = 0; i < numAnimalTypes; i++) {
		cout << "(1)dog (2)cat (3)mammal: ";
		cin >> choise;
		switch (choise) {
		case DOG:
			ptr = new Dog;
			break;
		case CAT:
			ptr = new Cat;
			break;
		default:
			ptr = new Mammal;
			break;
		}
	
		theArray[i] = ptr;
	}
	Mammal * otherArray[numAnimalTypes];
	for (int i = 0; i < numAnimalTypes; i++) {
		theArray[i]->speak();
		otherArray[i] = theArray[i]->clone();
	}
	for (int i = 0; i < numAnimalTypes; i++) {
		otherArray[i]->speak();
	}

	return 0;
}

