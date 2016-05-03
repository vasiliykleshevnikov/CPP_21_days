#include <iostream>
using namespace std;

class Mammal{
public:
	Mammal(): itsAge(1) {}
	virtual ~Mammal() {}
	virtual void speak() const = 0;
	virtual void move() const = 0;
protected:
	int itsAge;
};

class Dog : public Mammal {
public:
	void speak() const { cout << "Woof!" << endl; }
	void move() const { cout << "Dog move()..." << endl; }
};

class Cat : public Mammal {
public:
	void speak() const { cout << "Meow!" << endl; }
	void move() const { cout << "Cat move()..." << endl; }
};

class Horse : public Mammal {
public:
	void speak() const { cout << "Winnie!" << endl; }
	void move() const { cout << "Horse move()..." << endl; }
};

int main(){
	void (Mammal::*pFunc)() const = 0;
	Mammal * ptr = 0;
	int Animal;
	int Method;
	bool fQuit = false;

	while (fQuit == false){
		cout << "(0)Quit (1)Dog (2)Cat (3)Horse: ";
		cin >> Animal;
		switch(Animal){
			case 1: ptr = new Dog; break;
			case 2: ptr = new Cat; break;
			case 3: ptr = new Horse; break;
			default: fQuit = true; break;
		}

		if(fQuit == false){
			cout << "(1)speak (2)move: ";
			cin >> Method;
			switch(Method){
				case 1: pFunc = &Mammal::speak; break;
				default: pFunc = &Mammal::move; break;
			}

			(ptr->*pFunc)();
			delete ptr;
		}
	}

	return 0;
}

