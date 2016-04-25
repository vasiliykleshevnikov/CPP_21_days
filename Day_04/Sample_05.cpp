#include <iostream>

int main()
{
	using namespace std;

	int firstNumber, secondNumber;
	cout << "Please, enter a big number: ";
	cin >> firstNumber;
	cout << "\nPlease, enter a smaller number: ";
	cin >> secondNumber;
	cout << endl;

	if (firstNumber > secondNumber)
		cout << "\nThanks!\n";
	else
		cout << "\nOoops. The second number is bigger!\n";

	return 0;
}
