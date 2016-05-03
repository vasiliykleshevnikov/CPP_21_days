#include <iostream>
#include <ctype.h>
#include <string.h>

using namespace std;

bool GetWord(char * theString, char * word, int & wordOffset);

int main() {
	const int bufferSize = 255;
	char buffer[bufferSize + 1];
	char word[bufferSize + 1];
	int wordOffset = 0;

	cout << "Enter a string: ";
	cin.getline(buffer, bufferSize);

	while(GetWord(buffer, word, wordOffset))
		cout << "word: " << word << endl;

	return 0;
}

bool GetWord(char * theString, char * word, int & wordOffset) {
	if (theString[wordOffset] == 0)
		return false;

	char * p1, *p2;
	p1 = p2 = theString + wordOffset;

	for (int i = 0; i < (int) strlen(p1) && !isalnum(p1[0]); i++)
		p1++;

	if (!isalnum(p1[0]))
		return false;

	p2 = p1;
	while (isalnum(p2[0]))
		p2++;

	int len = int(p2 - p1);

	strncpy(word, p1, len);

	word[len] = '\0';

	for (int i = int(p2 - theString); i < (int) strlen(theString) && !isalnum(
			p2[0]); i++)
		p2++;

	wordOffset = int(p2 - theString);

	return true;
}

