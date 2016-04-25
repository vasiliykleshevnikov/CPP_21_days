#include <iostream>

using namespace std;

enum CHOICE {
	DrawRect = 1, GetArea, GetPerim, ChangeDimensions, Quit
};

class Rectangle {
public:
	Rectangle(int width, int height);
	~Rectangle();

	int getHeight() const {
		return itsHeight;
	}
	int getWidth() const {
		return itsWidth;
	}
	int getArea() const {
		return itsHeight * itsWidth;
	}
	int getPerim() const {
		return itsHeight * 2 + itsWidth * 2;
	}
	void setSize(int width, int height);
private:
	int itsWidth;
	int itsHeight;
};

void Rectangle::setSize(int width, int height) {
	itsWidth = width;
	itsHeight = height;
}

Rectangle::Rectangle(int width, int height) {
	itsWidth = width;
	itsHeight = height;
}

Rectangle::~Rectangle() {
}

int DoMenu();
void DoDrawRect(Rectangle);
void DoGetArea(Rectangle);
void DoGetPerim(Rectangle);

int main() {
	Rectangle theRect(30, 5);
	int choice = DrawRect;
	int fQuit = false;

	while (!fQuit) {
		choice = DoMenu();
		if (choice < DrawRect || choice > Quit) {
			cout << "\nInvalid choise, please try again." << endl << endl;
			continue;
		}

		switch (choice) {
		case DrawRect:
			DoDrawRect(theRect);
			break;
		case GetArea:
			DoGetArea(theRect);
			break;
		case GetPerim:
			DoGetPerim(theRect);
			break;
		case ChangeDimensions:
			int newLength, newWidth;
			cout << "\nNew width: ";
			cin >> newWidth;
			cout << "\nNew length: ";
			cin >> newLength;
			theRect.setSize(newWidth, newLength);
			DoDrawRect(theRect);
			break;
		case Quit:
			fQuit = true;
			cout << "Exiting...." << endl << endl;
			break;
		default:
			cout << "ERROR! in choice!" << endl;
			fQuit = true;
			break;
		}
	}

	return 0;
}

int DoMenu() {
	int choice;
	cout << endl << endl;
	cout << "**** Menu ****" << endl;
	cout << "(1) Dreaw Rectangle" << endl;
	cout << "(2) Area" << endl;
	cout << "(3) Perimeter" << endl;
	cout << "(4) Resize" << endl;
	cout << "(5) Quit" << endl;

	cin >> choice;

	return choice;
}

void DoDrawRect(Rectangle rect) {
	int height = rect.getHeight();
	int width = rect.getWidth();

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			cout << "#";
		cout << endl;
	}
}

void DoGetArea(Rectangle rect) {
	cout << "Area: " << rect.getArea() << endl;
}

void DoGetPerim(Rectangle rect) {
	cout << "Perimeter: " << rect.getPerim() << endl;
}

