#include <iostream>
using namespace std;

class Cat{
public:
	Cat(int age): itsAge(age) { HowManyCats++; }
	virtual ~Cat() { HowManyCats--; }
	virtual int getAge() { return itsAge; }
	virtual void setAge(int age) { itsAge = age; }
	static int getHowMany() { return HowManyCats; }
private:
	int itsAge;
	static int HowManyCats;
};

int Cat::HowManyCats = 0;

void TelepathicFunction();

int main(){
	const int maxCats = 5;
	int i;
	Cat * catHouse[maxCats];

	for (i = 0; i < maxCats; i++){
		catHouse[i] = new Cat(i);
		TelepathicFunction();
	}
		
	for(i = 0; i < maxCats; i++){
		TelepathicFunction();
		cout << "cat #" << i << " age: " << catHouse[i]->getAge() << endl;
		delete catHouse[i];
		catHouse[i] = 0;
	}
	
	return 0;
}

void TelepathicFunction(){
	cout << "cats: " << Cat::getHowMany() << endl;
}

