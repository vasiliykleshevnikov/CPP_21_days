#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Doubler(int AmountToDouble);

int x = 5, y = 7;

int main()
{
	int result = 0, input;
	cout << "Enter number between 0 and 10 000: ";
	cin >> input;
	result = Doubler(input);
	cout << "result: " << result;

	return 0;
}

int Doubler(int original)
{
	if (original > 10000)
		return original * 2;
	else 
		return -1;
	cout << "NOT RUN";
}
