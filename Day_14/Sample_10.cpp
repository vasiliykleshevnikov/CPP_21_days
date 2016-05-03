#include <iostream>
using namespace std;

enum COLOR {Red, Green, Blue, Yellow, White, Black, Brown };

class Animal{
public:
	Animal(int);
	virtual ~Animal() { cout << "Animal destructor..." << endl; }

	virtual int getAge() const { return itsAge; }
	virtual void setAge(int age) {itsAge = age; }

	virtual void sleep() const = 0;
	virtual void eat() const = 0;
	virtual void reproduce() const = 0;
	virtual void move() const = 0;
	virtual void speak() const = 0;
private:
	int itsAge;
};

Animal::Animal(int age):
		itsAge(age){
	cout << "Animal constructor..." << endl;
}



class Mammal : public Animal{
public:
	Mammal(int age): Animal(age) { cout << "Mammal constructor..." << endl; }
	virtual ~Mammal(){ cout << "Mammal destructor..." << endl; }

	virtual void reproduce() const { cout << "Mammal reproduction depicted..." << endl; }
};



class Fish : public Animal{
public:
	Fish(int age): Animal(age) { cout << "Fish constructor..." << endl; }
	virtual ~Fish(){ cout << "Fish destructor..." << endl; }

	virtual void sleep() const { cout << "Fish sleep()..." << endl; }
	virtual void eat() const { cout << "Fish eat()..." << endl; }
	virtual void reproduce() const { cout << "Fish reproduce()..." << endl; }
	virtual void move() const { cout << "Fish move()..." << endl; }
	virtual void speak() const {}
};



class Horse : public Mammal{
public:
	Horse(int age, COLOR color):
		Mammal(age), itsColor(color) { cout << "Horse constructor..." << endl; }
	virtual ~Horse() { cout << "Horse destructor..." << endl; }

	virtual void sleep() const { cout << "Horse sleep()..." << endl; }
	virtual void eat() const { cout << "Horse eat()..." << endl; }
	virtual void move() const { cout << "Horse move()..." << endl; }
	virtual void speak() const { cout << "Whinny!..." << endl; }

	virtual COLOR getItsColor() const { return itsColor; }
protected:
	COLOR itsColor;
};



class Dog : public Mammal{
public:
	Dog(int age, COLOR color):
		Mammal(age), itsColor(color) { cout << "Dog constructor..." << endl; }
	virtual ~Dog() { cout << "Dog destructor..." << endl; }

	virtual void sleep() const { cout << "Dog sleep()..." << endl; }
	virtual void eat() const { cout << "Dog eat()..." << endl; }
	virtual void move() const { cout << "Dog move()..." << endl; }
	virtual void speak() const { cout << "Whoof!..." << endl; }
	virtual void reproduce() const { cout << "Dog reproducing..." << endl; }

	virtual COLOR getItsColor() const { return itsColor; }
protected:
	COLOR itsColor;
};



int main(){
	Animal * pAnimal = 0;
	int choice;
	bool fQuit = false;

	while(1){
		cout << "(1)Dog (2)Horse (3)Fish (0)Quit: ";
		cin >> choice;

		switch(choice){
		case 1: pAnimal = new Dog(5, Brown);
		break;
		case 2: pAnimal = new Horse(4, Black);
		break;
		case 3: pAnimal = new Fish(5);
		break;
		default: fQuit = true;
		break;
		}

		if(fQuit)
			break;

		pAnimal->speak();
		pAnimal->eat();
		pAnimal->reproduce();
		pAnimal->move();
		pAnimal->sleep();
		delete pAnimal;
		cout << endl;
	}

	return 0;
}

