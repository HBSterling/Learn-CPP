#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter a number: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int x { getValueFromUser() }; // first call to getValueFromUser;
    int y { getValueFromUser() }; // second call

    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}