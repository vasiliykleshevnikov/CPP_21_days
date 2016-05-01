#include <iostream>

using namespace std;

class Rectangle {
public:
	Rectangle();
	Rectangle(int width, int height);
	~Rectangle() {
	}
	int getWidth() const {
		return itsWidth;
	}
	int getHeight() const {
		return itsHeight;
	}
private:
	int itsWidth;
	int itsHeight;
};

Rectangle::Rectangle() {
	itsWidth = 5;
	itsHeight = 10;
}

Rectangle::Rectangle(int width, int height) :
	itsWidth(width), itsHeight(height) {
}

int main() {
	Rectangle rectangle;
	cout << "Rectangle1 width: " << rectangle.getWidth() << endl;
	cout << "Rectangle1 heigth: " << rectangle.getHeight() << endl;

	int width, heigth;
	cout << "Enter width: ";
	cin >> width;
	cout << "Enter height: ";
	cin >> heigth;

	Rectangle rectangle2(width, heigth);
	cout << "Rectangle2 width: " << rectangle2.getWidth() << endl;
	cout << "Rectangle2 heigth: " << rectangle2.getHeight() << endl;

	return 0;
}

