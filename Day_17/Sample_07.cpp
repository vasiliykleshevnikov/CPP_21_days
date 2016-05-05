#include <iostream>
using namespace std;

int main()
{
	char stringOne[256];
	char stringTwo[256];
	char stringThree[256];

	cout << "Enter string one: ";
	cin.getline(stringOne, 256);
	cout << "String one: " << stringOne << endl;

	cout << "Enter string two: ";
	cin >> stringTwo;
	cout << "String two: " << stringTwo << endl;

	cout << "Enter string three: ";
	cin.getline(stringThree, 256);
	cout << "String three: " << stringThree << endl;

	return 0;
}
