#include <iostream>

using namespace std;

int menu();
void DoTaskOne();
void DoTaskMany(int);

int main() {
	bool exit = false;
	for (;;) {
		int choice = menu();
		switch (choice) {
		case (1):
			DoTaskOne();
			break;
		case (2):
			DoTaskMany(2);
			break;
		case (3):
			DoTaskMany(3);
			break;
		case (4):
			continue;
			break;
		case (5):
			exit = true;
			break;
		default:
			cout << "ERROR!" << endl;
			break;
		}
		if (exit)
			break;
	}
	return 0;
}

int menu() {
	int choice;
	cout << "**** Menu ****" << endl << endl;
	cout << "(1) Choise one." << endl;
	cout << "(2) Choise two." << endl;
	cout << "(3) Choise three." << endl;
	cout << "(4) Redisplay menu." << endl;
	cout << "(5) Quit." << endl << endl;
	cin >> choice;
	return choice;
}

void DoTaskOne() {
	cout << "Task One!" << endl;
}

void DoTaskMany(int which) {
	if (which == 2)
		cout << "Task Two!" << endl;
	else
		cout << "Task Threee!" << endl;
}
