#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char string1[] = "No man is an island";
	char string2[80];
	
	strncpy(string2, string1, 80);
	
	cout << "string1: " << string1 << endl;
	cout << "string2: " << string2 << endl;
	
	return 0;
}

