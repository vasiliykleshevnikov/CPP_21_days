#include "Sample_04_Cat.hpp"

Cat::Cat(int age)
{
	itsAge = age;
}

Cat::~Cat()
{
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

