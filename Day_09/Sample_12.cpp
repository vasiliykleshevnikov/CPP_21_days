#include <iostream>

using namespace std;

class SimpleCat {
public:
	SimpleCat(int age, int weight);
	~SimpleCat() {
	}
	int getAge() const {
		return itsAge;
	}
	int getWeight() const {
		return itsWeight;
	}
private:
	int itsAge;
	int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight){
	itsAge = age;
	itsWeight = weight;
}

SimpleCat & TheFunction();

int main() {
	SimpleCat & rcat = TheFunction();
	cout << "frisky age: " << rcat.getAge() << endl;
	cout << "frisky adress: " << &rcat << endl;
	SimpleCat * pcat = &rcat;
	delete pcat;

	return 0;
}

SimpleCat & TheFunction(){
	SimpleCat * frisky = new SimpleCat(5, 9);
	cout << "frisky adress: " << frisky << endl;
	return * frisky;
}

