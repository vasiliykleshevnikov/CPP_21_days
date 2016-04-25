#include <iostream>

using namespace std;

int main()
{
	unsigned short int number;
	cout << "Enter number between 1 and 5: ";
	cin >> number;
	
	switch(number)
	{
	case 0: cout << "Too small, sorry!";
	case 1: cout << "============= 1" << endl;
	case 2: cout << "============= 2" << endl;
	case 3: cout << "============= 3" << endl;
	case 4: cout << "============= 4" << endl;
	case 5: cout << "============= 5" << endl;
	break;
	default: cout << "Error!" << endl;
	}
	cout << endl;
	return 0;
}
