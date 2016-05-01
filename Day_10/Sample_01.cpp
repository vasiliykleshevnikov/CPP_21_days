#include <iostream>

using namespace std;

class Rectangle {
public:
	Rectangle(int width, int height);
	~Rectangle() {
	}
	void drawShape() const;
	void drawShape(int width, int height) const;
private:
	int itsWidth;
	int itsHeight;
};

Rectangle::Rectangle(int width, int height) {
	itsWidth = width;
	itsHeight = height;
}

void Rectangle::drawShape() const {
	drawShape(itsWidth, itsHeight);
}

void Rectangle::drawShape(int width, int height) const {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	Rectangle rectangle(30, 5);
	cout << "drawShape(): " << endl;
	rectangle.drawShape();
	cout << "drawShape(40, 2): " << endl;
	rectangle.drawShape(40, 2);
	return 0;
}

