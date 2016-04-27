#include <iostream>

using namespace std;

class SimpleCat {
public:
	SimpleCat();
	~SimpleCat();
private:
	int itsAge;
};

SimpleCat::SimpleCat(){
	cout << "Constructor called..." << endl;
	itsAge = 1;
}

SimpleCat::~SimpleCat(){
	cout << "Destructor called..." << endl;
}

int main() {
	cout << "SimpleCat Frisky..." << endl;
	SimpleCat Frisky;
	cout << "SimpleCat *pRags = new SimpleCat..." << endl;
	SimpleCat * pRags = new SimpleCat;
	cout << "Delete pRags..." << endl;
	delete pRags;
	
	return 0;
}

