#include <iostream>

using namespace std;

int main()
{
	using namespace std;
	int i = 0;
	int max;
	
	cout << "How many hellos? ";
	cin >> max;
	
	for (;;)
	{
		if (i < max) {
			cout << "Hello!" << endl;
			i++;
		} else
		{
			break;
		}
	}
	
	return 0;
}

