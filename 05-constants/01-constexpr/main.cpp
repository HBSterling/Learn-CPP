#include <iostream>

int five()
{
    return 5;
}

int main()
{
    constexpr double gravity { 9.8 };
    constexpr int sum { 4 + 5 };
    constexpr int something { sum };

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    //constexpr int myAge { age };  // compile error: age is not a constant expression
    //constexpr int f { five() }; // compile error: return value of five() is not constexpr

    return 0;
}