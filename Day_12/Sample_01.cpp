#include <iostream>

using namespace std;

enum BREED {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

class Mammal{
public:
	Mammal(): itsAge(2), itsWeight(5){}
	~Mammal(){}
	int getAge() const { return itsAge; }
	void setAge(int age) { itsAge = age; }
	int getWeight() const { return itsWeight; }
	void setWeight(int weight) { itsWeight = weight; }

	void speak() const { cout << "Mammal sound!" << endl; }
	void sleep() const { cout << "Mammal sleeping!" << endl; }
protected:
	int itsAge;
	int itsWeight;
};

class Dog : public Mammal{
public:
	Dog():itsBreed(GOLDEN){}
	~Dog(){}
	BREED getBreed() const { return itsBreed; }
	void setBreed(BREED breed) {itsBreed = breed; }

	void wagTail() const { cout << "Tail wagging..." << endl; }
	void BegForFood() const { cout << "Begging for food..." << endl; }
protected:
	BREED itsBreed;
};

int main(){
	Dog Fido;
	Fido.speak();
	Fido.wagTail();
	cout << "Fido age: " << Fido.getAge() << endl;
	return 0;
}

