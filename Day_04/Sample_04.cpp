#include <iostream>

int main()
{
	using namespace std;

	int MetsScore, YankeesScore;
	cout << "Enter the score for the Mets: ";
	cin >> MetsScore;
	cout << "\nEnter the score for the Yankees: ";
	cin >> YankeesScore;
	cout << endl;

	if (MetsScore < YankeesScore)
		cout << "Go Yankees!\n";
	if (MetsScore == YankeesScore)
	{
		cout << "A tie? Naah, can't be.\n";
		cout << "Give me the real score for the Yankees: ";
		cin >> YankeesScore;

		if (MetsScore > YankeesScore)
			cout << "Knew it! Let's go Mets!\n";
		if (MetsScore < YankeesScore)
			cout << "Knew it! Let's go Yankees!\n";
		if (MetsScore == YankeesScore)
			cout << "Wow, it really was a tie!\n";
	}

	cout << "\nThank's for telling me.\n";
	return 0;
}
