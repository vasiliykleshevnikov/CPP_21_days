#include <iostream>

using namespace std;

class Cat{
public:
	Cat():itsAge(1), itsWeight(5){}
	~Cat(){}
	int getAge() const { return itsAge; }
	int getWeight() const { return itsWeight; }
	void setAge(int age) { itsAge = age; }
	void setWeight(int weight) { itsWeight = weight; }
private:
	int itsAge;
	int itsWeight;
};

int main() {
	Cat * Family[1000];
	Cat *pCat;
	for(int i = 0; i < 1000; i++){
		pCat = new Cat;
		pCat->setAge(2*i+1);
		Family[i] = pCat;
	}

	for(int i = 0; i < 1000; i++){
		cout << "Cat #" << i + 1 << " age: " << Family[i]->getAge() << endl;
	}

	return 0;
}

