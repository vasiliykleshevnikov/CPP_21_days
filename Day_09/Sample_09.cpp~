#include <iostream>

using namespace std;

class SimpleCat {
public:
	SimpleCat();
	SimpleCat(SimpleCat&);
	~SimpleCat();
};

SimpleCat::SimpleCat() {
	cout << "SimpleCat Constructor..." << endl;
}

SimpleCat::SimpleCat(SimpleCat&) {
	cout << "SimpleCat Copy Constructor..." << endl;
}

SimpleCat::~SimpleCat() {
	cout << "SimpleCat Destructor..." << endl;
}

SimpleCat FunctionOne(SimpleCat cat);
SimpleCat* FunctionTwo(SimpleCat *pCat);

int main() {
	cout << "Making a cat..." << endl;
	SimpleCat Frisky;
	cout << "Called FunctionOne..." << endl;
	FunctionOne(Frisky);
	cout << "Called FunctionTwo..." << endl;
	FunctionTwo(&Frisky);
	return 0;
}

SimpleCat FunctionOne(SimpleCat cat) {
	cout << "FunctionOne..." << endl;
	return cat;
}

SimpleCat* FunctionTwo(SimpleCat *pCat) {
	cout << "FunctionTwo..." << endl;
	return pCat;
}

