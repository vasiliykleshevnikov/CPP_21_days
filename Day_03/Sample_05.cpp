#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	short int smallNumber;
	smallNumber = 32767;
	cout << "small number: " << smallNumber << endl;
	smallNumber++;
	cout << "small number: " << smallNumber << endl;
	smallNumber++;
	cout << "small number: " << smallNumber << endl;
	return 0;
}
