#include <iostream>

using namespace std;

enum BREED {
	GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB
};

class Mammal {
public:
	Mammal();
	~Mammal();

	int getAge() const {
		return itsAge;
	}
	void setAge(int age) {
		itsAge = age;
	}
	int getWeight() const {
		return itsWeight;
	}
	void setWeight(int weight) {
		itsWeight = weight;
	}

	void speak() const {
		cout << "Mammal sound!" << endl;
	}
	void sleep() const {
		cout << "Mammal sleeping!" << endl;
	}
	void move() const {
		cout << "Mammal move()" << endl;
	}
	void move(int distance) const {
		cout << "Mammal move() distance:" << distance << endl;
	}
protected:
	int itsAge;
	int itsWeight;
};

class Dog: public Mammal {
public:
	Dog();
	~Dog();

	BREED getBreed() const {
		return itsBreed;
	}
	void setBreed(BREED breed) {
		itsBreed = breed;
	}

	void wagTail() const {
		cout << "Tail wagging..." << endl;
	}
	void BegForFood() const {
		cout << "Begging for food..." << endl;
	}

	void speak() const {
		cout << "Woof!" << endl;
	}
	void move() const {
		cout << "Dog move()" << endl;
	}
protected:
	BREED itsBreed;
};

Mammal::Mammal() :
	itsAge(1), itsWeight(5) {
	cout << "Mammal constructor..." << endl;
}

Mammal::~Mammal() {
	cout << "Mammal destructor..." << endl;
}

Dog::Dog() :
	Mammal(), itsBreed(GOLDEN) {
	cout << "Dog constructor..." << endl;
}

Dog::~Dog() {
	cout << "Dog destructor..." << endl;
}

int main() {
	Mammal animal;
	Dog Fido;
	animal.move();
	animal.move(2);
	Fido.move();
	Fido.Mammal::move(5);
	Fido.speak();
	return 0;
}

