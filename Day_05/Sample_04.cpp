#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void myFunction();

int x = 5, y = 7;

int main()
{
	cout << " x from main: " << x << endl;
	cout << " y from main: " << y << endl;
	myFunction();
	cout << " x from main: " << x << endl;
	cout << " y from main: " << y << endl;

	return 0;
}

void myFunction()
{
	int y = 10;
	cout << " x from myFunction: " << x << endl;
	cout << " y from myFunction: " << y << endl;
}
