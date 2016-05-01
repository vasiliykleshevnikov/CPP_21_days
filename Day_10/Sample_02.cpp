#include <iostream>

using namespace std;

class Rectangle {
public:
	Rectangle(int width, int height);
	~Rectangle() {
	}
	void drawShape(int width, int height, bool useCurrentVals) const;
private:
	int itsWidth;
	int itsHeight;
};

Rectangle::Rectangle(int width, int height) :
	itsWidth(width), itsHeight(height) {
}

void Rectangle::drawShape(int width, int height, bool useCurrentVals = false) const {
	int printWidth;
	int printHeight;

	if (useCurrentVals) {
		printWidth = itsWidth;
		printHeight = itsHeight;
	} else {
		printWidth = width;
		printHeight = height;
	}

	for (int i = 0; i < printHeight; i++) {
		for (int j = 0; j < printWidth; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	Rectangle rectangle(30, 5);
	cout << "drawShape(0, 0, true): " << endl;
	rectangle.drawShape(0, 0, true);
	cout << "drawShape(40, 2): " << endl;
	rectangle.drawShape(40, 2);
	return 0;
}

