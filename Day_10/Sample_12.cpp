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
	const Counter& operator ++();
	const Counter& operator ++(int);
	Counter add(const Counter & rhs);
private:
	int itsVal;
};

Counter::Counter() :
	itsVal(0) {
}

Counter::Counter(int val) :
	itsVal(val) {
}

const Counter& Counter::operator ++() {
	++itsVal;
	return *this;
}

const Counter& Counter::operator ++(int flag) {
	Counter temp(*this);
	++itsVal;
	return temp;
}

Counter Counter::add(const Counter & rhs){
	return Counter(itsVal + rhs.getItsVal());
}

int main() {
	Counter counter1(2), counter2(4), counter3;
	counter3 = counter1.add(counter2);
	cout << "counter1: " << counter1.getItsVal() << endl;
	cout << "counter2: " << counter2.getItsVal() << endl;
	cout << "counter3: " << counter3.getItsVal() << endl;
	return 0;
}

