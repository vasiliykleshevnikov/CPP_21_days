#include <iostream>
using namespace std;

class Dog{
public:
	void speak() const { cout << "Woof!" << endl; }
	void move() const { cout << "Dog move()..." << endl; }
	void eat() const { cout << "Dog eat()..." << endl; }
	void growl() const { cout << "Dog growl()..." << endl; }
	void whimper() const { cout << "Dog whimper()..." << endl; }
	void rollOver() const { cout << "Dog rollOver()..." << endl; }
	void playDead() const { cout << "Dog playDead()..." << endl; }
};

typedef void (Dog::*PDF)() const;

int main(){
	const int MAxFuncs = 7;
	PDF DogFunctions[MAxFuncs] =
	{
			&Dog::speak,
			&Dog::move,
			&Dog::eat,
			&Dog::growl,
			&Dog::whimper,
			&Dog::rollOver,
			&Dog::playDead
	};

	Dog *pDog = 0;
	int Method;
	bool fQuit = false;

	while (fQuit == false){
		cout << "(0)Quit (1)Speak (2)Move (3)Eat (4)Growl (5)Whimper (6)RollOver (7)PlayDead: ";
		cin >> Method;
		if(Method <= 0 || Method >= 8)
			fQuit = true;
		else{
			pDog = new Dog;
			(pDog->*DogFunctions[Method - 1])();
			delete pDog;
		}
	}
	return 0;
}

