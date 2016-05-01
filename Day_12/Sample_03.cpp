#include <iostream>

using namespace std;

enum BREED {
	GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB
};

class Mammal {
public:
	Mammal();
	Mammal(int age);
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
protected:
	int itsAge;
	int itsWeight;
};

class Dog: public Mammal {
public:
	Dog();
	Dog(int age);
	Dog(int age, int weight);
	Dog(int age, BREED breed);
	Dog(int age, int weight, BREED breed);
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
protected:
	BREED itsBreed;
};

Mammal::Mammal() :
	itsAge(1), itsWeight(5) {
	cout << "Mammal constructor..." << endl;
}

Mammal::Mammal(int age) :
	itsAge(age), itsWeight(5) {
	cout << "Mammal(int) constructor..." << endl;
}

Mammal::~Mammal() {
	cout << "Mammal destructor..." << endl;
}

Dog::Dog() :
	Mammal(), itsBreed(GOLDEN) {
	cout << "Dog constructor..." << endl;
}

Dog::Dog(int age) :
	Mammal(age), itsBreed(GOLDEN) {
	cout << "Dog(int) constructor..." << endl;
}

Dog::Dog(int age, int weight) :
	Mammal(age), itsBreed(GOLDEN) {
	itsWeight = weight;
	cout << "Dog(int, int) constructor..." << endl;
}

Dog::Dog(int age, int weight, BREED breed) :
	Mammal(age), itsBreed(breed) {
	itsWeight = weight;
	cout << "Dog(int, int, BREED) constructor..." << endl;
}

Dog::Dog(int age, BREED breed) :
	Mammal(age), itsBreed(breed) {
	cout << "Dog(int, BREED) constructor..." << endl;
}

Dog::~Dog() {
	cout << "Dog destructor..." << endl;
}

int main() {
	Dog Fido;
	Dog Rover(5);
	Dog Buster(6, 8);
	Dog Yorkie (3, GOLDEN);
	Dog Dobbie (4, 20, DOBERMAN);
	Fido.speak();
	Rover.wagTail();
	cout << "Yorkie age: " << Yorkie.getAge() << endl;
	cout << "Dobbie weight: " << Dobbie.getWeight() << endl;
	return 0;
}

