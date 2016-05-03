#include <iostream>
using namespace std;

enum TYPE { HORSE, PEGASUS };

class Horse{
public:
	virtual void gallop() { cout << "gallop()..." << endl; }
private:
	int itsAge;
};

class Pegasus : public Horse{
public:
	virtual void fly(){
		cout << "fly()..." << endl;
	}
};

const int NumberHorses = 5;

int main(){
	Horse* Ranch[NumberHorses];
	Horse* pHorse;
	int choise, i;
	for(i = 0; i < NumberHorses; i++){
		cout << "(1) Horse (2) Pegasus: ";
		cin >> choise;
		if (choise == 2)
			pHorse = new Pegasus;
		else
			pHorse = new Horse;
		Ranch[i] = pHorse;
	}
	cout << endl;
	for (i = 0; i < NumberHorses; i++){
		Pegasus *pPeg = dynamic_cast <Pegasus*> (Ranch[i]);
		if(pPeg)
			pPeg->fly();
		else
			cout << "Horse" << endl;
		delete Ranch[i];
	}
	return 0;
}

