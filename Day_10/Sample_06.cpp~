#include <iostream>

using namespace std;

class Counter {
public:
	Counter();
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

int main() {
	Counter counter;
	cout << "The value of val is " << counter.getItsVal() << endl;
	counter.increment();
	cout << "The value of val is " << counter.getItsVal() << endl;
	return 0;
}

