#include <iostream>

int main()
{
	using namespace std;

	unsigned short int difference;
	unsigned short int bigNumber = 100;
	unsigned short int smallNumber = 50;

	difference = bigNumber - smallNumber;
	cout << "Difference is: " << difference << endl;
	difference = smallNumber - bigNumber;
	cout << "Difference is: " << difference << endl;
	return 0;
}
