#include <iostream>

int main()
{
	std::cout << "Please enter a number: ";

	int num{};
	std::cin >> num;

    // Use an expression to multiply num by 2, at the point it's printed.
    // This avoids creating a new variable that is only used once.
    // It also avoids num being overriden, so we can use the variable again later.
	std::cout << "Double that number is: " <<  num * 2 << '\n'; 

	return 0;
}