#include <iostream>
#include <string.h>
using namespace std;

class String{
public:
	String();
	String(const char * const);
	String(const String &);
	~String();

	char & operator [] (unsigned short offset);
	char operator [] (unsigned short offset) const;
	String operator + (const String &);
	void operator += (const String &);
	String & operator = (const String &);

	friend String operator+(const String&, const String&);
	friend ostream& operator << (ostream& theStream, String& theString);

	unsigned short getLen() const { return itsLen; }
	const char * getString() const {return itsString; }
private:
	String (unsigned short);
	char * itsString;
	unsigned short itsLen;
};

String::String(){
	itsString = new char[1];
	itsString[0] = '\0';
	itsLen = 0;
}

String::String (unsigned short len){
	itsString = new char[len + 1];
	for(unsigned short int i = 0; i <= len; i++)
		itsString[i] = '\0';
	itsLen = len;
}

String::String(const char * const cString){
	itsLen = strlen(cString);
	itsString = new char[itsLen + 1];
	for(unsigned short int i = 0; i < itsLen; i++)
		itsString[i] = cString[i];
	itsString[itsLen] = '\0';
}

String::String(const String & rhs){
	itsLen = rhs.getLen();
	itsString = new char[itsLen + 1];
	for(unsigned short int i = 0; i < itsLen; i++)
		itsString[i] = rhs[i];
	itsString[itsLen] = '\0';
}

String::~String(){
	delete [] itsString;
	itsLen = 0;
}

String & String::operator = (const String & rhs){
	if(this == &rhs)
		return *this;
	delete [] itsString;
	itsLen = rhs.getLen();
	itsString = new char[itsLen + 1];
	for(unsigned short int i = 0; i < itsLen; i++)
		itsString[i] = rhs[i];
	itsString[itsLen] = '\0';
	return *this;
}

char & String::operator [] (unsigned short offset){
	if(offset > itsLen)
		return itsString[itsLen-1];
	else
		return itsString[offset];
}

char String::operator [] (unsigned short offset) const{
	if(offset > itsLen)
		return itsString[itsLen-1];
	else
		return itsString[offset];
}

String String::operator + (const String & rhs){
	unsigned short int totalLen = itsLen + rhs.getLen();
	String temp(totalLen);
	unsigned short int i;
	for(i = 0; i < itsLen; i++)
		temp[i] = itsString[i];
	for(unsigned short int j = 0; j < rhs.getLen(); j++, i++)
		temp[i] = rhs[j];
	temp[totalLen] = '\0';
	return temp;
}

void String::operator += (const String & rhs){
	unsigned short int rhsLen = rhs.getLen();
	unsigned short int totalLen = itsLen + rhs.getLen();
	String temp(totalLen);
	unsigned short int i;
	for(i = 0; i < itsLen; i++)
		temp[i] = itsString[i];
	for(unsigned short int j = 0; j < rhs.getLen(); j++, i++)
		temp[i] = rhs[i-itsLen];
	temp[totalLen] = '\0';
	*this = temp;
}


String operator+(const String &lhs, const String &rhs){
	int totalLen = lhs.getLen() + rhs.getLen();
	String temp(totalLen);
	int i, j;
	for(i = 0; i < lhs.getLen(); i++)
		temp[i] = lhs[i];
	for(j = 0, i = lhs.getLen(); j < rhs.getLen(); j++, i++)
		temp[i] = rhs[j];
	temp[totalLen] = '\0';
	return temp;
}

ostream& operator << (ostream& theStream, String& theString){
	theStream << theString.itsString;
	return theStream;
}

int main(){
	String s1("String One ");
	String s2("String Two ");
	char *c1 = { "C-String One " };
	String s3, s4, s5;

	cout << "s1: " << s1 << endl;
	cout << "s2: " << s2 << endl;
	cout << "c1: " << c1 << endl;

	s3 = s1 + s2;
	s4 = s1 + c1;
	s5 = c1 + s2;

	cout << "s3: " << s3 << endl;
	cout << "s4: " << s4 << endl;
	cout << "s5: " << s5 << endl;

	return 0;
}

