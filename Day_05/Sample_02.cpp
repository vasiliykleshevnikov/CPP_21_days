#include <iostream>

using std::cout;
using std::cin;
using std::endl;

float Convert(float);

int main()
{
	float TempCel, TempFer;
	cout << "Enter the temperature in Fahrenheit: ";
	cin >> TempFer;
	TempCel = Convert(TempFer);
	cout << "in Celsius: " << TempCel << endl;

	return 0;
}

float Convert(float TempFer)
{
	float TempCel;
	TempCel = ((TempFer - 32) * 5) / 9;
	return TempCel;
}
