#include <iostream>

int Add(int first, int second)
{
	std::cout << "In Add(), received " << first << " and " << second << std::endl;
	return (first + second);
}

int main()
{
	using std::cout;
	using std::cin;

	cout << "I'm in main()!\n";
	int a, b, c;
	cout << "Enter two numbers: ";
	cin >> a;
	cin >> b;
	cout << "\nCalling Add()\n";
	c=Add(a, b);
	cout << "\nBack in main()\n";
	cout << "c was set to " << c;
	cout << "\nExiting...\n";
	return 0;
}
