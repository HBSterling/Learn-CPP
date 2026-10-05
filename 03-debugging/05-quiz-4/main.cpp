#include <iostream>

int readNumber()
{
    std::cout << "Please enter a number: ";
    //char x{}; This is the error. The char type returns incorrectly.
    //          (When we enter 8, the value is stored as 56 instead etc.)
    
    int x{}; // Corrected variable type.
    std::cin >> x;

    return x;
}
    
void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer(x + y);

    return 0;
}