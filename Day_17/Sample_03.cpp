#include <iostream>
using namespace std;

int main()
{
	int myInt;
	long myLong;
	double myDouble;
	float myFloat;
	unsigned int myUnsigned;
	char myWord[50];

	cout << "myInt: ";
	cin >> myInt;
	cout << "myLong: ";
	cin >> myLong;
	cout << "myDouble: ";
	cin >> myDouble;
	cout << "myFloat: ";
	cin >> myFloat;
	cout << "myUnsigned: ";
	cin >> myUnsigned;
	cout << "myWord: ";
	cin >> myWord;

	cout << "myInt: " << myInt << endl;
	cout << "myLong: " << myLong << endl;
	cout << "myDouble: " << myDouble << endl;
	cout << "myFloat: " << myFloat << endl;
	cout << "myUnsigned: " << myUnsigned << endl;
	cout << "myWord: " << myWord << endl;

	cout << "myInt, myLong, myDouble, myFloat, myUnsigned, myWord: ";
	cin >> myInt >> myLong >> myDouble >> myFloat >> myUnsigned >> myWord;
	cout << "myInt: " << myInt << endl;
	cout << "myLong: " << myLong << endl;
	cout << "myDouble: " << myDouble << endl;
	cout << "myFloat: " << myFloat << endl;
	cout << "myUnsigned: " << myUnsigned << endl;
	cout << "myWord: " << myWord << endl;

	return 0;
}
