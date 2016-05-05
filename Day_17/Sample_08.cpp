#include <iostream>
using namespace std;

int main()
{
	char stringOne[256];
	char stringTwo[256];

	cout << "Enter string one: ";
	cin.get(stringOne, 255);
	cout << "String one: " << stringOne << endl;

	cout << "Enter string two: ";
	cin.getline(stringTwo, 255);
	cout << "String two: " << stringTwo << endl;

	cout << "\n\nTry again...\n";

	cout << "Enter string one: ";
	cin.get(stringOne, 255);
	cout << "String one: " << stringOne << endl;

	cin.ignore(255, '\n');

	cout << "Enter string two: ";
	cin.getline(stringTwo, 255);
	cout << "String two: " << stringTwo << endl;

	return 0;
}
