#include <iostream>

using namespace std;

int main() {
	unsigned short int shortVar = 5;
	unsigned int intVar = 65535;
	unsigned long int longVar = 49856745645;
	long int sVar = -5;

	cout << "shortVar\t" << shortVar;
	cout << "\t\tAdress:\t" << &shortVar << endl;

	cout << "intVar\t\t" << intVar;
	cout << "\t\tAdress:\t" << &intVar << endl;

	cout << "longVar\t\t" << longVar;
	cout << "\tAdress:\t" << &longVar << endl;

	cout << "sVar\t\t" << sVar;
	cout << "\t\tAdress:\t" << &sVar << endl;
	
	return 0;
}

