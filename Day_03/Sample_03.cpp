#include <iostream>

typedef unsigned short int USHORT;

int main()
{
	using std::cout;
	using std::endl;

	USHORT width = 5;
	USHORT length = 10;

	USHORT area = (width * length);

	cout << "Width: " << width << " \n";
	cout << "Length: " << length << endl;
	cout << "Area: " << area << endl;

	return 0;
}
