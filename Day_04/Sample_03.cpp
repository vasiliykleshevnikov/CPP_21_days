#include <iostream>

int main()
{
	using namespace std;

	int myAge = 39;
	int yourAge = 39;
	cout << "I am: " << myAge << " years old.\n";
	cout << "You are: " << yourAge << " years old.\n";
	myAge++;
	++yourAge;
	cout << "One years passes....\n";
	cout << "I am: " << myAge << " years old.\n";
	cout << "You are: " << yourAge << " years old.\n";
	cout << "Another year passes\n";
	cout << "I am: " << myAge++ << " years old.\n";
	cout << "You are: " << ++yourAge << " years old.\n";
	cout << "Let's print again.\n";
	cout << "I am: " << myAge << " years old.\n";
	cout << "You are: " << yourAge << " years old.\n";
	return 0;
}
