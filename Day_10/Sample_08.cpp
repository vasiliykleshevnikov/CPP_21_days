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
	Counter operator ++();
private:
	int itsVal;
};

Counter::Counter() :
	itsVal(0) {
}

Counter Counter::operator ++() {
	++itsVal;
	Counter temp;
	temp.setItsVal(itsVal);
	return temp;
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

