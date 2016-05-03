#include <iostream>
using namespace std;

typedef int HANDS;
enum COLOR {Red, Green, Blue, Yellow, White, Black, Brown };

class Animal{
public:
	Animal(int);
	virtual ~Animal() { cout << "Animal destructor..." << endl; }
	virtual int getAge() const { return itsAge; }
	virtual void setAge(int age) {itsAge = age; }
private:
	int itsAge;
};

Animal::Animal(int age):
		itsAge(age){
	cout << "Animal constructor..." << endl;
}

class Horse : public Animal{
public:
	Horse(COLOR color, HANDS height, int age);
	virtual ~Horse() { cout << "Horse destructor..." << endl; }
	virtual void Whinny() const { cout << "Whinny!" << endl; }
	virtual HANDS getHeight() const { return itsHeight; }
	virtual COLOR getColor() const { return itsColor; }
private:
	HANDS itsHeight;
	COLOR itsColor;
};

Horse::Horse(COLOR color, HANDS height, int age):
		Animal(age),
		itsColor(color), itsHeight(height){
	cout << "Horse constructor..." << endl;
}



class Bird : public Animal{
public:
	Bird(COLOR color, bool migrates, int age);
	virtual ~Bird() { cout << "Bird destructor..." << endl; }
	virtual void Chirp() const { cout << "Chirp!" << endl; }
	virtual void fly() const { cout << "FLY!!!" << endl; }
	virtual COLOR getColor() const { return itsColor; }
	virtual bool getMigration() const { return itsMigration; }
private:
	COLOR itsColor;
	bool itsMigration;
};

Bird::Bird(COLOR color, bool migrates, int age):
		Animal(age),
		itsColor(color), itsMigration(migrates){
	cout << "Bird constructor..." << endl;
}



class Pegasus : public Horse, public Bird{
public:
	void Chirp() const { Whinny(); }
	Pegasus(COLOR, HANDS, bool, long, int);
	~Pegasus() { cout << "Pegasus destructor..." << endl; }
	virtual long getNumberBelivers() const { return itsNumberBelivers; }
	virtual COLOR getColor() const { return Horse::getColor(); }
	virtual int getAge() const { return Horse::getAge(); }
private:
	long itsNumberBelivers;
};

Pegasus::Pegasus(COLOR color, HANDS height, bool migrates, long numBelive, int age):
		Horse(color, height, age),
		Bird(color, migrates, age),
		itsNumberBelivers(numBelive){
	cout << "Pegasus constructor..." << endl;
}





int main(){
	Pegasus *pPeg = new Pegasus(Red, 5, true, 10, 2);
	pPeg->fly();
	pPeg->Whinny();
	cout << "\nPegasus height: " << pPeg->getHeight() << endl;
	cout << "Pegasus migration: " << pPeg->getMigration() << endl;
	cout << "Pegasus numBelive: " << pPeg->getNumberBelivers() << endl;
	cout << "Pegasus color: " << pPeg->getColor() << endl;
	cout << "Pegasus age: " << pPeg->getAge() << endl;
	delete pPeg;
	return 0;
}

