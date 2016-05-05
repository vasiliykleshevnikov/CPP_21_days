#include <iostream>
using namespace std;

int main()
{
	cout << "Start >";
	cout.width(25);
	cout << 123 << "< End" << endl;

	cout << "Start >";
	cout.width(25);
	cout.fill('*');
	cout << 123 << "< End" << endl;

	cout << "Start >";
	cout.width(25);
	cout << 456 << "< End" << endl;

	return 0;
}
