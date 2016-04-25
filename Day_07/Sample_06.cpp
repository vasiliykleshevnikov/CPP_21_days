#include <iostream>

using namespace std;

int main() 
{
	using namespace std;
	int counter;
	cout << "How many hellos?";
	cin >> counter;
	
	do
	{
		cout << "Hello!" << endl;
		counter--;
	} while (counter > 0);
	cout << "Counter is: " << counter << endl;
	
	return 0;
}
