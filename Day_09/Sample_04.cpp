#include <iostream>

using namespace std;

class SimpleCat{
public:
	SimpleCat(int age, int weight);
	~SimpleCat(){}
	int getAge() { return itsAge; }
	int getWeight() { return itsWeight; }
private:
	int itsAge;
	int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight) {
	itsAge = age;
	itsWeight = weight;
}

int main() {
	SimpleCat Frisky(5, 8);
	SimpleCat &rFrisky = Frisky;
	
	cout << "Frisky age is: " << Frisky.getAge() << endl;
	cout << "Frisky weight is: " << rFrisky.getWeight() << endl;

	return 0;
}

