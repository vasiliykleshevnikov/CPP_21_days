#include <iostream>

using namespace std;

int main() {
	int intOne;
	int &refIntOne = intOne;
	
	intOne = 5;
	cout << "intOne: " << intOne << endl;
	cout << "refIntOne: " << refIntOne << endl;
	
	cout << "&intOne: " << &intOne << endl;
	cout << "&refIntOne: " << &refIntOne << endl;
	
	return 0;
}
