#include <iostream>

using namespace std;

class Cat{
public:
	Cat():itsAge(1), itsWeight(5){}
	~Cat(){ cout << "Destructor called..." << endl; }
	int getAge() const { return itsAge; }
	int getWeight() const { return itsWeight; }
	void setAge(int age) { itsAge = age; }
	void setWeight(int weight) { itsWeight = weight; }
private:
	int itsAge;
	int itsWeight;
};

int main() {
	Cat * Family = new Cat[500];
	for (int i = 0; i < 500; i++)
		Family[i].setAge(2*i + 1);
	
	for (int i = 0; i < 500; i++){
		cout << "Cat #"<< i+1 << ": " << Family[i].getAge() << endl;
	}
	
	delete [] Family;
	
	return 0;
}

