/*  This program asks the user to enter a number, and then enter a second number
    The program then tells the user what the result of adding and subtracting
    the two numbers is. */

#include <iostream>

int main()
{
    // Inputs & stores first number
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    // Inputs & stores second number
    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    // Uses an expression to add the numbers together, as this avoids overriding 
    // the variables or the creation of new ones.
    std::cout << x << " + " << y << " is " << x + y << ".\n"; // Addition
    std::cout << x << " - " << y << " is " << x - y << ".\n"; // Subtraction

    return 0;
}