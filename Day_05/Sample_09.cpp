#include <iostream>

using namespace std;

int fib (int);

int main ()
{
	int n, answer;
	cout << "Enter # number fib: ";
	cin >> n;
	answer = fib(n);
	cout << "Answer: " << answer << endl;

	return 0;
}

int fib (int n)
{
	cout << "fib..." << endl;
	
	if (n < 3)
	{
		cout << "Return ONE" << endl;
		return 1;
	}
	else
	{
		cout << "Call fib(" << n - 2 << "); ..." << endl;
		cout << "Call fib(" << n - 1 << "); ..." << endl;
		return fib(n-2) + fib(n-1);
	}
}
