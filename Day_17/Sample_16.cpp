#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	char fileName[80];
	char buffer[255];
	cout << "File name: ";
	cin >> fileName;

	ofstream fout(fileName);
	fout << "This line written directly to the line...\n";
	cout << "Enter text for the file: ";
	cin.ignore(1, '\n');
	cin.getline(buffer, 255);
	fout << buffer << endl;
	fout.close();

	ifstream fin(fileName);
	cout << "Here's the contents of the file:" << endl;
	char ch;
	while(fin.get(ch))
		cout << ch;
	
	cout << "\n***End of file contents.***\n";
	fin.close();

	return 0;
}
