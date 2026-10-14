#include "io.h"
#include <iostream>

// Function calls for user to input an integer than is then returned.
int readNumber()
{
    std::cout << "Please enter an integer: ";

    int x{};
    std::cin >> x;

    return x;
}

// Function simply calls to write the output
void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}