#include <iostream>

using namespace std;

short int Factor(int n, int * pSquared, int * pCubed);

int main() {
	int number, squared, cubed;
	short int error;

	cout << "Enter a number (0-20): ";
	cin >> number;

	error = Factor(number, &squared, &cubed);

	if (!error) {
		cout << "number:\t" << number << endl;
		cout << "squared:\t" << squared << endl;
		cout << "cubed:\t" << cubed << endl;
	} else
		cout << "Error" << endl;

	return 0;
}

short int Factor(int n, int * pSquared, int * pCubed) {
	short int value = 0;
	if (n > 20)
		value = 1;
	else {
		*pSquared = n * n;
		*pCubed = n * n * n;
	}
	return value;
}
