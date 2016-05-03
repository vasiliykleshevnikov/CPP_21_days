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
	Cat Litter[5];
	for(int i = 0; i < 5; i++)
		Litter[i].setAge(2 * i + 1);
	
	for(int i = 0; i < 5; i++){
		cout << "Cat #" << i + 1 << " age: " << Litter[i].getAge() << endl;
	}

	return 0;
}

