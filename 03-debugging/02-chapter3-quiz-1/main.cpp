#include <iostream>

int readNumber(int x)
{
//std::cerr << "Entered readNumber()\n";

	std::cout << "Please enter a number: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
//std::cerr << "Entered writeAnswer()\n";

	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x {};
	//readNumber(x);   This function is the bug.
					// It doesn't set x to the value it returns.

	x = readNumber(x); // This is the fix. Simply set x to the returned value of readNumber();

//std::cerr << "x is currently: " << x << '\n';

	x = x + readNumber(x);

//std::cerr << "After readNumber(), x is currently: " << x << '\n';

	writeAnswer(x);

	return 0;
}