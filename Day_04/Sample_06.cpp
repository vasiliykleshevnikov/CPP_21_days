#include <iostream>

int main()
{
	using namespace std;

	int x, y, z;
	cout << "Enter two numbers.\n";
	cout << "First: ";
	cin >> x;
	cout << "\nSecond: ";
	cin >> y;
	cout << endl;

	if (x > y)
		z = x;
	else
		z = y;

	cout << "After if test, z: " << z;
	cout << endl;

	z = (x > y) ? x : y;
	cout << "After conditional test, z: " << z;
	cout << endl;

	return 0;
}
