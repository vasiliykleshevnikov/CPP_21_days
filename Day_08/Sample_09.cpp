#include <iostream>

using namespace std;

class Rectangle {
public:
	Rectangle();
	~Rectangle();
	void setLength(int length) {
		itsLength = length;
	}
	int getLength() const {
		return itsLength;
	}
	void setWidth(int width) {
		itsWidth = width;
	}
	int getWidth() const {
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

Rectangle::~Rectangle() {
}

int main() {
	Rectangle * pRect = new Rectangle;
	const Rectangle * pConstRect = new Rectangle;
	Rectangle * const pConstPtr = new Rectangle;

	cout << "pRect width: " << pRect->getWidth() << endl;
	cout << "pConstRect width: " << pConstRect->getWidth() << endl;
	cout << "pConstPtr width: " << pConstPtr->getWidth() << endl;

	pRect->setWidth(10);
	//pConstRect->setWidth(10);
	pConstPtr->setWidth(10);

	cout << "pRect width: " << pRect->getWidth() << endl;
	cout << "pConstRect width: " << pConstRect->getWidth() << endl;
	cout << "pConstPtr width: " << pConstPtr->getWidth() << endl;
	return 0;
}

