#include <iostream>

using namespace std;

int AreaCube(int length, int width = 25, int heigth = 1);

int main ()
{
	int length = 100, width = 50, heigth = 2;
	int area;

	area = AreaCube(length, width, heigth);
	cout << "First area: " << area << endl;
	
	area = AreaCube(length, width);
	cout << "Second area: " << area << endl;
	
	area = AreaCube(length);
	cout << "Third area: " << area << endl;
	
	return 0;
}

int AreaCube(int length, int width, int heigth)
{
	return length * width * heigth;
}
