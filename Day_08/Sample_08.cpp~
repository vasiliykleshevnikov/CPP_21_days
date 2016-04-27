#include <iostream>

using namespace std;

class Rectangle {
public:
	Rectangle();
	~Rectangle();
	void setLength(int length) {
		this->itsLength = length;
	}
	int getLength() const {
		return this->itsLength;
	}
	void setWidth(int width) {
		itsWidth = width;
	}
	int getWidth() {
		return itsWidth;
	}
private:
	int itsLength;
	int itsWidth;
};

Rectangle::Rectangle() {
	itsWidth = 5;
	itsLength = 10;
}

Rectangle::~Rectangle() {}

int main() {
	Rectangle rect;
	cout << "rect is " << rect.getLength() << endl;
	cout << "rect is " << rect.getWidth() << endl;
	rect.setLength(20);
	rect.setWidth(10);
	cout << "rect is " << rect.getLength() << endl;
	cout << "rect is " << rect.getWidth() << endl;
	return 0;
}

