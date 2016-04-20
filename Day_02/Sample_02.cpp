#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	cout << "Hello there.\n";
	cout << "Here is 5: " << 5 << "\n";
	cout << "The manipulator std::endl ";
	cout << "writes a new line to the screen.";
	cout << endl;
	cout << "Here is a very big number:\t" << 70000;
	cout << endl;
	cout << "Here is the sum of 8 and 5:\t";
	cout << 8 + 5 << endl;
	cout << "Here is a fraction\t\t";
	cout << (float) 5/8 << endl;
	cout << "And a very big number:\t";
	cout << (double) 7000 * 7000 << endl;
	cout << "Vasiliy Kleshevnikov. C++." << endl;
	return 0;
}
