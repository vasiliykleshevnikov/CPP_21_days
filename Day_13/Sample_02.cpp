// Программа содержит ошибку работы с массивом

#include <iostream>

using namespace std;

int main() {
	long int sentinelOne[3];
	long int targetArray[25];
	long int sentinelTwo[3];

	for (int i = 0; i < 25; i++) {
		sentinelOne[i] = 0;
		sentinelTwo[i] = 0;
	}

	for (int i = 0; i < 25; i++) {
		targetArray[i] = 10;
	}

	cout << "targetArray[0] = " << targetArray[0] << endl;
	cout << "targetArray[24] = " << targetArray[24] << endl;

	for (int i = 0; i < 3; i++) {
		cout << "sentinelOne[" << i << "]:" << sentinelOne[i] << endl;
		cout << "sentinelTwo[" << i << "]:" << sentinelTwo[i] << endl;
	}

	for (int i = 0; i < 28; i++) {
		targetArray[i] = 20;
	}

	cout << "targetArray[0] = " << targetArray[0] << endl;
	cout << "targetArray[25] = " << targetArray[25] << endl;

	for (int i = 0; i < 3; i++) {
		cout << "sentinelOne[" << i << "]:" << sentinelOne[i] << endl;
		cout << "sentinelTwo[" << i << "]:" << sentinelTwo[i] << endl;
	}

	return 0;
}

