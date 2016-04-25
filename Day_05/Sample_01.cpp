#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Area(int length, int width);

int main()
{
	int length, width;
	cout << "Enter length: ";
	cin >> length;
	cout << endl << "Enter width: ";
	cin >> width;
	int square = Area(length, width);
	cout << endl << endl << "Area is: " << square << endl;

	return 0;
}

int Area(int length, int width)
{
	return length * width;
}
