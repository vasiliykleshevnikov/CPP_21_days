#include "Sample_05_Rectangle.hpp"

Rectangle::Rectangle(int top, int left, int bottom, int right){
	itsTop = top;
	itsLeft = left;
	itsBottom = bottom;
	itsRight = right;

	itsUpperLeft.setX(left);
	itsUpperLeft.setY(top);

	itsUpperRight.setX(right);
	itsUpperRight.setY(top);

	itsLowerLeft.setX(left);
	itsLowerLeft.setY(bottom);

	itsLowerRight.setX(right);
	itsLowerRight.setY(bottom);
}

int Rectangle::getArea() {
	int Width = itsRight - itsLeft;
	int Height = itsTop - itsBottom;
	return (Width * Height);
}

int main() {
	Rectangle myRectangle (100, 20, 50, 80);
	int Area = myRectangle.getArea();

	std::cout << "Area is: " << Area << std::endl;
	std::cout << "myRectangle.getUpperLeft().getX(): " << myRectangle.getUpperLeft().getX() << std::endl;
	return 0;
}

