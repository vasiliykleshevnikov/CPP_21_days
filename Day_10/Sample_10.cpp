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
	const Counter& operator ++();
private:
	int itsVal;
};

Counter::Counter() :
	itsVal(0) {
}

const Counter& Counter::operator ++() {
	++itsVal;
	return *this;
}

int main() {
	Counter counter;
	cout << "The value of val is " << counter.getItsVal() << endl;
	counter.increment();
	cout << "The value of val is " << counter.getItsVal() << endl;
	++counter;
	cout << "The value of val is " << counter.getItsVal() << endl;
	Counter a = ++counter;
	cout << "The value of val is " << counter.getItsVal() << endl;
	cout << "The value of val is (a) " << a.getItsVal() << endl;
	return 0;
}

