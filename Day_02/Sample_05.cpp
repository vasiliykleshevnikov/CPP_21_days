#include <iostream>

// функция DemonstrationFunction()
// выводит на экран информационное сообщение
void DemonstrationFunction()
{
	std::cout << "In DemonstrationFunction\n";
}

// функция main() выводит сообщение
// вызывает DemonstrationFunction(), а затем
// выводит на экран следующее сообщение
int main()
{
	std::cout << "In main\n";
	DemonstrationFunction();
	std::cout << "Back in main\n";
	return 0;
}
