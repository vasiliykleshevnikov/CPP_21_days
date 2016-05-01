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
	operator unsigned int();
private:
	int itsVal;
};

Counter::Counter() :
	itsVal(0) {
}

Counter::Counter(int val) :
	itsVal(val) {
}

Counter::operator unsigned int() {
	return (int(itsVal));
}

int main() {
	Counter counter(5);
	int var = counter;
	cout << "var is " << var << endl;
	return 0;
}

