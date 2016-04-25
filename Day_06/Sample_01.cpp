#include <iostream>

class Cat
{
public:
	int itsAge;
	int itsWeight;
};

int main()
{
	Cat Frisky;
	Frisky.itsAge = 5;
	std::cout << "Frisky age is: " << Frisky.itsAge << std::endl;
	return 0;
}

