#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void myFunc();

int main()
{
	int x = 5;
	cout << " in main x = " << x << endl;
	myFunc();
	cout << " in main x = " << x << endl;

	return 0;
}

void myFunc()
{
	int x = 8;
	cout << "### myFunc x = " << x << endl;
	{
		cout << " ### bloc myFunc x = " << x << endl;
		int x = 9;
		cout << " ### bloc myFunc x = " << x << endl;
	}
	cout << "### myFunc x = " << x << endl;
}
