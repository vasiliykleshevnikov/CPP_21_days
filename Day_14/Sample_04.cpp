#include <iostream>
using namespace std;

typedef int HANDS;
enum COLOR {Red, Green, Blue, Yellow, White, Black, Brown };

class Horse{
public:
	Horse(COLOR color, HANDS height);
	virtual ~Horse() { cout << "Horse destructor..." << endl; }
	virtual void Whinny() const { cout << "Whinny!" << endl; }
	virtual HANDS getHeight() const { return itsHeight; }
	virtual COLOR getColor() const { return itsColor; }
private:
	HANDS itsHeight;
	COLOR itsColor;
};

Horse::Horse(COLOR color, HANDS height):
		itsColor(color), itsHeight(height){
	cout << "Horse constructor..." << endl;
}



class Bird{
public:
	Bird(COLOR color, bool migrates);
	virtual ~Bird() { cout << "Bird destructor..." << endl; }
	virtual void Chirp() const { cout << "Chirp!" << endl; }
	virtual void fly() const { cout << "FLY!!!" << endl; }
	virtual COLOR getColor() const { return itsColor; }
	virtual bool getMigration() const { return itsMigration; }
private:
	COLOR itsColor;
	bool itsMigration;
};

Bird::Bird(COLOR color, bool migrates):
		itsColor(color), itsMigration(migrates){
	cout << "Bird constructor..." << endl;
}



class Pegasus : public Horse, public Bird{
public:
	void Chirp() const { Whinny(); }
	Pegasus(COLOR, HANDS, bool, long);
	~Pegasus() { cout << "Pegasus destructor..." << endl; }
	virtual long getNumberBelivers() const { return itsNumberBelivers; }
private:
	long itsNumberBelivers;
};

Pegasus::Pegasus(COLOR color, HANDS height, bool migrates, long numBelive):
		Horse(color, height),
		Bird(color, migrates),
		itsNumberBelivers(numBelive){
	cout << "Pegasus constructor..." << endl;
}





int main(){
	Pegasus *pPeg = new Pegasus(Red, 5, true, 10);
	pPeg->fly();
	pPeg->Whinny();
	cout << "\nPegasus height: " << pPeg->getHeight() << endl;
	cout << "Pegasus migration: " << pPeg->getMigration() << endl;
	cout << "Pegasus numBelive: " << pPeg->getNumberBelivers();
	delete pPeg;
	return 0;
}

