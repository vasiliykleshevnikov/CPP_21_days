#include <iostream>

int main() {
	int myArrray[5];
	for (int i = 0; i < 5; i++) {
		std::cout << "Value for myArray[" << i << "]: ";
		std::cin >> myArrray[i];
	}
	for (int i = 0; i < 5; i++) {
		std::cout << "Value for myArray[" << i << "]: " << myArrray[i] << std::endl;
	}
	return 0;
}
