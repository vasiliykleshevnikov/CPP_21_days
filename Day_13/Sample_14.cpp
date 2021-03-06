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

// main() function

int main(){
	String s1("initial test");
	cout << "S1:\t" << s1.getString() << endl;

	char * temp = "Hello World";
	s1 = temp;
	cout << "S1:\t" << s1.getString() << endl;

	char tempTwo[20];
	strcpy(tempTwo, "; nice to be here!");
	s1 += tempTwo;
	cout << "tenpTwo:\t" << tempTwo << endl;
	cout << "S1:\t" << s1.getString() << endl;

	cout << "S1[4]:\t" << s1[4] << endl;
	s1[4] = 'x';
	cout << "S1:\t" << s1.getString() << endl;

	cout << "S1[999]:\t" << s1[999] << endl;

	String s2(" Another string");
	String s3;
	s3 = s1 + s2;
	cout << "S3:\t" << s3.getString() << endl;

	String s4;
	s4 = "Why does this work?";
	cout << "S4:\t" << s4.getString() << endl;

	return 0;
}

