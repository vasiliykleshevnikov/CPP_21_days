#include <iostream>

using namespace std;

unsigned long int fib (unsigned int position);

int main()
{
	unsigned int position;
	unsigned long int answer;
	
	cout << "Enter position: ";
	cin >> position;
	
	answer = fib(position);
	cout << "Answer: " << answer << endl;
	
	return 0;
}

unsigned long int fib (unsigned int position)
{
	unsigned long int minusOne = 1, minusTwo = 1, answer = 2;
	if (position < 3)
		return 1;
	
	for (position -= 3; position != 0; position--)
	{
		minusTwo = minusOne;
		minusOne = answer;
		answer = minusOne + minusTwo;
	}
	
	return answer;
}
