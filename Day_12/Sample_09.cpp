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
protected:
	int itsAge;
};

class Dog: public Mammal {
public:
	void speak() const {
		cout << "Woof!" << endl;
	}
};

class Cat: public Mammal {
public:
	void speak() const {
		cout << "Meow!" << endl;
	}
};

class Horse: public Mammal {
public:
	void speak() const {
		cout << "Winne!" << endl;
	}
};

class Pig: public Mammal {
public:
	void speak() const {
		cout << "Oink!" << endl;
	}
};

void ValueFunction (Mammal);
void PtrFunction (Mammal*);
void RefFunction (Mammal&);

int main() {
	Mammal * ptr;
	int choise;
	for (int i = 0; i < 5; i++) {
		cout << "(1)dog (2)cat (3)horse (4)pig: ";
		cin >> choise;
		switch (choise) {
		case 1:
			ptr = new Dog;
			break;
		case 2:
			ptr = new Cat;
			break;
		case 3:
			ptr = new Horse;
			break;
		case 4:
			ptr = new Pig;
			break;
		default:
			ptr = new Mammal;
			break;
		}
		ValueFunction (*ptr);
		PtrFunction (ptr);
		RefFunction (*ptr);
	}

	return 0;
}

void ValueFunction (Mammal mammal){
	mammal.speak();
}
void PtrFunction (Mammal *mammal){
	mammal->speak();
}
void RefFunction (Mammal &mammal){
	mammal.speak();
}

