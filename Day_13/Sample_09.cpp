#include <iostream>

using namespace std;

int main() {
	int AllocationSize = 5;
	int * pArrayOfNumbers = new int [AllocationSize];
	int ElementsUsedSoFar = 0;
	int MaximumelementsAllowed = AllocationSize;
	int InputNumber = -1;
	
	cout << endl << "NextNumber: ";
	cin >> InputNumber;
	
	while (InputNumber > 0) {
		pArrayOfNumbers[ElementsUsedSoFar++] = InputNumber;
		
		if(ElementsUsedSoFar == MaximumelementsAllowed){
			int * pLargerArray = new int[MaximumelementsAllowed + AllocationSize];
			for(int CopyIndex = 0; CopyIndex < MaximumelementsAllowed; CopyIndex++){
				pLargerArray[CopyIndex] = pArrayOfNumbers[CopyIndex];
			}
			
			delete [] pArrayOfNumbers;
			pArrayOfNumbers = pLargerArray;
			MaximumelementsAllowed += AllocationSize;
		}
		cout << endl << "NextNumber:";
		cin >> InputNumber;
	}
	
	for (int Index = 0; Index < ElementsUsedSoFar; Index++){
		cout << pArrayOfNumbers[Index] << endl;
	}
	
	return 0;
}

