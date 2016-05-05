#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char one[] = "One if by land";

	int fullLength = strlen(one);
	int tooShort = fullLength - 4;
	int tooLong = fullLength + 6;

	cout.write(one, fullLength) << endl;
	cout.write(one, tooShort) << endl;
	cout.write(one, tooLong) << endl;

	return 0;
}
