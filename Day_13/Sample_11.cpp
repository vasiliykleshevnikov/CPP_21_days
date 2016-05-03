#include <iostream>

using namespace std;

int main() {
	char buffer[80];
	cout << "Enter string: ";
	cin.get(buffer, 79);
	cout << "buffer: " << buffer << endl;
	
	return 0;
}

