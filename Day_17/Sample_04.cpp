#include <iostream>
using namespace std;

int main()
{
	char ch;

	while ( (ch = cin.get()) != '\0')
		cout << "ch: " << ch << endl;
	cout << "\nDone!\n";

	return 0;
}
