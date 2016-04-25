#include <iostream>

using namespace std;

int Double (int);
long Double (long);
float Double (float);
double Double (double);

int main ()
{
	int myInt = 6500;
	long myLong = 65000;
	float myFloat = 6.5F;
	double myDouble = 6.5e20;

	cout << "myInt:\t" << myInt << endl;
	cout << "myLong:\t" << myLong << endl;
	cout << "myFloat:\t" << myFloat << endl;
	cout << "myDouble:\t" << myDouble << endl;

	cout << "myInt:\t" << Double(myInt) << endl;
	cout << "myLong:\t" << Double(myLong) << endl;
	cout << "myFloat:\t" << Double(myFloat) << endl;
	cout << "myDouble:\t" << Double(myDouble) << endl;

	return 0;
}

int Double (int original)
{
	cout << "Double(int)" << endl;
	return 2 * original;
}

long Double (long original)
{
	cout << "Double(long)" << endl;
	return 2 * original;
}

float Double (float original)
{
	cout << "Double(float)" << endl;
	return 2 * original;
}

double Double (double original)
{
	cout << "Double(double)" << endl;
	return 2 * original;
}
