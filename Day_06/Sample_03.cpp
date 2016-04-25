#include <iostream>

class Cat
{
public:
	Cat(int);
	~Cat();
	int getAge();
	void setAge(int);
	void meow();
private:
	int itsAge;
};

Cat::Cat(int age)
{
	itsAge = age;
}

Cat::~Cat()
{
}

int Cat::getAge()
{
	return itsAge;
}

void Cat::setAge(int age)
{
	itsAge = age;
}

void Cat::meow()
{
	std::cout << "Meow!" << std::endl;
}

int main()
{
	Cat Friskey(5);
	Friskey.meow();
	std::cout << "Friskey age is: " << Friskey.getAge() << std::endl;
	Friskey.meow();
	Friskey.setAge(7);
	std::cout << "Friskey age is: " << Friskey.getAge() << std::endl;
	return 0;
}

