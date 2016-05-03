#include <iostream>
using namespace std;

class Shape {
public:
	Shape() {
	}
	virtual ~Shape() {
	}
	virtual long getArea() {
		return -1;
	}
	virtual long getPerim() {
		return -1;
	}
	virtual void Draw() {
	}
private:
};

class Circle: public Shape {
public:
	Circle(int radius) :
		itsRadius(radius) {
	}
	~Circle() {
	}
	long getArea() {
		return 3 * itsRadius * itsRadius;
	}
	long getPerim() {
		return 6 * itsRadius;
	}
	void Draw();
private:
	int itsRadius;
	int itsCircumference;
};

void Circle::Draw() {
	cout << "Circle drawing routine here!" << endl;
}

class Rectangle: public Shape {
public:
	Rectangle(int len, int width) :
		itsLength(len), itsWidth(width) {
	}
	virtual ~Rectangle() {
	}
	virtual long getArea() {
		return itsLength * itsWidth;
	}
	virtual long getPerim() {
		return 2 * itsLength + 2 * itsWidth;
	}
	virtual int getLength() {
		return itsLength;
	}
	virtual int getWidth() {
		return itsWidth;
	}
	virtual void Draw();
private:
	int itsWidth;
	int itsLength;
};

void Rectangle::Draw() {
	for (int i = 0; i < itsLength; i++) {
		for (int j = 0; j < itsWidth; j++)
			cout << "#";
		cout << endl;
	}
}

class Square: public Rectangle {
public:
	Square(int len) :
		Rectangle(len, len) {
	}
	Square(int len, int width) :
		Rectangle(len, width) {
		if (getLength() != getWidth())
			cout << "Error, not a square!" << endl;
	}
	~Square() {
	}
	long getPerim() {
		return 4 * getLength();
	}
private:
};

int main() {
	int choice;
	bool fQuit = false;
	Shape * sp;

	while (!fQuit) {
		cout << "(1)Circle (2)Rectangle (3)Square (0)Quit: ";
		cin >> choice;
		switch (choice) {
		case 0:
			fQuit = true;
			break;
		case 1:
			sp = new Circle(5);
			break;
		case 2:
			sp = new Rectangle(4, 6);
			break;
		case 3:
			sp = new Square(5);
			break;
		default:
			cout << "Enter a number between 0 and 3" << endl;
			continue;
			break;
		}
		if (!fQuit)
			sp->Draw();
		delete sp;
		sp = 0;
		cout << endl;
	}
	return 0;
}

