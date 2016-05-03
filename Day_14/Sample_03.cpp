#include <iostream>
using namespace std;

enum TYPE { HORSE, PEGASUS };

class Horse{
public:
	Horse() { cout << "Horse constructor..." << endl; }
	virtual ~Horse() { cout << "Horse destructor..." << endl; }
	virtual void Whinny() const { cout << "Whinny!" << endl; }
private:
	int itsAge;
};

class Bird{
public:
	Bird() { cout << "Bird constructor..." << endl; }
	virtual ~Bird() { cout << "Bird destructor..." << endl; }
	virtual void Chirp() const { cout << "Chirp!" << endl; }
	virtual void fly() const { cout << "FLY!!!" << endl; }
private:
	int itsWeight;
};

class Pegasus : public Horse, public Bird{
public:
	void Chirp() const { Whinny(); }
	Pegasus() { cout << "Pegasus constructor..." << endl; }
	~Pegasus() { cout << "Pegasus destructor..." << endl; }
};

const int MagicNumber = 2;

int main(){
	Horse* Ranch[MagicNumber];
	Bird* Aviary[MagicNumber];
	Horse* pHorse;
	Bird* pBird;
	int choise, i;
	for(i = 0; i < MagicNumber; i++){
		cout << "(1) Horse (2) Pegasus: ";
		cin >> choise;
		if (choise == 2)
			pHorse = new Pegasus;
		else
			pHorse = new Horse;
		Ranch[i] = pHorse;
	}
	for (i = 0; i < MagicNumber; i++){
		cout << "(1) Bird (2) Pegasus: ";
		cin >> choise;
			if (choise == 2)
				pBird = new Pegasus;
			else
				pBird = new Bird;
			Aviary[i] = pBird;
	}
	cout << endl;
	for(i = 0; i < MagicNumber; i++){
		cout << "\nRanch[" << i << "]: ";
		Ranch[i]->Whinny();
		delete Ranch[i];
	}
	for(i = 0; i < MagicNumber; i++){
		cout << "\nAviary[" << i << "]: ";
		Aviary[i]->Chirp();
		Aviary[i]->fly();
		delete Aviary[i];
	}
	return 0;
}

