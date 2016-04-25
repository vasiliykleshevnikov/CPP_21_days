#include <iostream>

class Cat
{
public:
	int getAge();
	void setAge(int);
	void meow();
private:
	int itsAge;
};

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
	Cat Friskey;
	Friskey.setAge(5);
	Friskey.meow();
	std::cout << "Friskey age is: " << Friskey.getAge() << std::endl;
	Friskey.meow();
	return 0;
}
