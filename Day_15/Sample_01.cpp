#include <iostream>
using namespace std;

class Cat{
public:
	Cat(int age): itsAge(age) { HowManyCats++; }
	virtual ~Cat() { HowManyCats--; }
	virtual int getAge() { return itsAge; }
	virtual void setAge(int age) { itsAge = age; }
	static int HowManyCats;
private:
	int itsAge;
};
int Cat::HowManyCats = 0;

int main(){
	const int maxCats = 5;
	int i;
	Cat * catHouse[maxCats];
	
	for (i = 0; i < maxCats; i++)
		catHouse[i] = new Cat(i);
	
	for(i = 0; i < maxCats; i++){
		cout << "howMany " << Cat::HowManyCats;
		cout << "cat #" << i << " age: " << catHouse[i]->getAge() << endl;
		delete catHouse[i];
		catHouse[i] = 0;
	}
	return 0;
}

