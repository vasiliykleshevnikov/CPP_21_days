#include <iostream>

using namespace std;

int main() {
	int intOne;
	int &refIntOne = intOne;

	intOne = 5;
	cout << "intOne:\t\t" << intOne << endl;
	cout << "refIntOne:\t" << refIntOne << endl;
	cout << "&intOne:\t" << &intOne << endl;
	cout << "&refIntOne:\t" << &refIntOne << endl;

	int intTwo = 8;
	refIntOne = intTwo;
	cout << endl;
	cout << "intOne:\t\t" << intOne << endl;
	cout << "refIntOne:\t" << refIntOne << endl;
	cout << "intTwo:\t\t" << intTwo << endl;
	cout << "&intOne:\t" << &intOne << endl;
	cout << "&refIntOne:\t" << &refIntOne << endl;
	cout << "&intTwo:\t" << &intTwo << endl;

	return 0;
}
