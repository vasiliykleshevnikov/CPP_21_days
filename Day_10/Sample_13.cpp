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
	Counter operator+ (const Counter&);
private:
	int itsVal;
};

Counter::Counter() :
	itsVal(0) {
}

Counter::Counter(int val) :
	itsVal(val) {
}

Counter Counter::operator +(const Counter& rhs){
	return Counter(itsVal + rhs.getItsVal());
}

int main() {
	Counter counter1(2), counter2(4), counter3;
	counter3 = counter1 + counter2;
	cout << "counter1: " << counter1.getItsVal() << endl;
	cout << "counter2: " << counter2.getItsVal() << endl;
	cout << "counter3: " << counter3.getItsVal() << endl;
	return 0;
}

