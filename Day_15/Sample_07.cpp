#include <iostream>
using namespace std;

void Square (int&, int&);
void Cube (int&, int&);
void Swap (int&, int&);
void GetVals (int&, int&);
void PrintVals (int, int);

int main(){
	int valOne = 1, valTwo = 2;
	int choice;
	const int MaxArray = 5;
	void (*pFuncArray[MaxArray])(int&, int&);

	for (int i = 0; i < MaxArray; i++) {
		cout << "(1)Change Values, (2)Square, (3)Cube, (4)Swap: ";
		cin >> choice;
		switch (choice){
			case 1:
				pFuncArray[i] = GetVals;
				break;
			case 2:
				pFuncArray[i] = Square;
				break;
			case 3:
				pFuncArray[i] = Cube;
				break;
			case 4:
				pFuncArray[i] = Swap;
				break;
			default:
				pFuncArray[i] = 0;
				break;
		}
	}
	
	for (int i = 0; i < MaxArray; i++) {
		if(pFuncArray[i] == 0)
			continue;
		pFuncArray[i](valOne, valTwo);
		PrintVals(valOne, valTwo);
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

