#include <iostream>

using namespace std;

inline int Double (int);

int main ()
{
	int num;
	cout << "Enter number to work: ";
	cin >> num;
	cout << "Result: " << Double(num) << endl;

	cout << "Enter number to work: ";
	cin >> num;
	cout << "Result: " << Double(num) << endl;

	return 0;
}

int Double (int original)
{
	return 2 * original;
}
