#include <iostream>

class Cat
{
public:
	Cat(int);
	~Cat();
	int getAge() const {return itsAge;};
	void setAge(int age) {itsAge = age;};
	void meow() const {std::cout << "Meow!" << std::endl;}
private:
	int itsAge;
};
