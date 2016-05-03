#include <iostream>
using namespace std;

void Square (int&, int&);
void Cube (int&, int&);
void Swap (int&, int&);
void GetVals (int&, int&);
void PrintVals (int, int);

int main(){
	bool fQuit = false;
	
	int valOne = 1, valTwo = 2;
	int choice;
	
	while(fQuit == false){
		cout << "(0)Quit, (1)Change Values, (2)Square, (3)Cube, (4)Swap: ";
		cin >> choice;
		switch (choice){
			case 1: 
				PrintVals(valOne, valTwo);
				GetVals(valOne, valTwo);
				PrintVals(valOne, valTwo);
				break;
			case 2: 
				PrintVals(valOne, valTwo);
				Square(valOne, valTwo);
				PrintVals(valOne, valTwo); 
				break;
			case 3: 
				PrintVals(valOne, valTwo);
				Cube(valOne, valTwo);
				PrintVals(valOne, valTwo);
				break;
			case 4: 
				PrintVals(valOne, valTwo);
				Swap(valOne, valTwo);
				PrintVals(valOne, valTwo);
				break;
			default: 
				fQuit = true; 
				break;
		}
	}
	
	return 0;
}

void Square (int& rX, int& rY){
	rX *= rX;
	rY *= rY;
}

void Cube (int& rX, int& rY){
	int temp;
	
	temp = rX;
	rX = temp * temp * temp;
	
	temp = rY;
	rY = temp * temp * temp;
}

void Swap (int& rX, int& rY){
	int temp;
	temp = rX;
	rX = rY;
	rY = temp;
}

void GetVals (int& rX, int& rY){
	cout << "new x: ";
	cin >> rX;
	cout << "new y: ";
	cin >> rY;
}

void PrintVals (int x, int y){
	cout << "x: " << x << " y: " << y << endl;
}
