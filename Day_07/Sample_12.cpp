#include <iostream>

using namespace std;

int main()
{
	using namespace std;

	int rows, columns;
	cout << "How many rows? ";
	cin >> rows;
	cout << "How many columns? ";
	cin >> columns;
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
			cout << "X";
		cout << endl;
	}
	
	return 0;
}

