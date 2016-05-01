#include <iostream>

using namespace std;

class Counter {
public:
	Counter();
	Counter(int val);
	~Counter() {
	}
	int getItsVal() const {
		return itsVal;
	}
	void setItsVal(int val) {
		itsVal = val;
	}
	void increment() {
		++itsVal;
	}
private:
	int itsVal;
};

Counter::Counter() :
	itsVal(0) {
}

Counter::Counter(int val) :
	itsVal(val) {
}

int main() {
	int var = 5;
	Counter counter = var;
	cout << "The value of val is " << counter.getItsVal() << endl;
	return 0;
}

