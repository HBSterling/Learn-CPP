#include <iostream>

int getUserInput()
{
    std::cout << "Enter a number to be doubled: ";

    int input{};
    std::cin >> input;

    return input;
}

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    std::cout << doubleNumber ( getUserInput() ) << '\n';
    
    return 0;
}