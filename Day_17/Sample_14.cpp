#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int number = 185;
	cout << "The number is: " << number << endl;
	cout << "The number is: " << hex << number << endl;

	cout.setf(ios::showbase);
	cout << "The number is: " << hex << number << endl;

	cout << "The number is: ";
	cout.width(10);
	cout << hex << number << endl;

	cout << "The number is: ";
	cout.width(10);
	cout.setf(ios::left);
	cout << hex << number << endl;

	cout << "The number is: ";
	cout.width(10);
	cout.setf(ios::internal);
	cout << hex << number << endl;

	cout << "The number is: " << setw(10) << hex << number << endl;

	return 0;
}
