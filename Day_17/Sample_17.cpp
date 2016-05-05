#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	char fileName[80];
	char buffer[255];
	cout << "File name: ";
	cin >> fileName;

	ifstream fin(fileName);
	if(fin)
	{
		cout << "Current file contents:\n";
		char ch;
		while(fin.get(ch))
			cout << ch;
	
		cout << "\n***End of file contents.***\n";
	}
	fin.close();

	cout << "\nOpening " << fileName << " in append mode...\n";

	ofstream fout(fileName, ios::app);
	if(!fout)
	{
		cout << "Unable to open " << fileName << " for appending.\n";
		return 1;
	}
	
	cout << "Enter text for the file: ";
	cin.ignore(1, '\n');
	cin.getline(buffer, 255);
	fout << buffer << endl;
	fout.close();

	fin.open(fileName);
	if(!fin)
	{
		cout << "Unable to open " << fileName << " for reading.\n";
		return 1;
	}

	cout << "Here's the contents of the file:" << endl;
	char ch;
	while(fin.get(ch))
		cout << ch;
	
	cout << "\n***End of file contents.***\n";
	fin.close();

	return 0;
}
