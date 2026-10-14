#include <iostream>

int print(int ch)
{
    return ch;
}

int main()
{
    std::cout << "Enter a single character: ";
    char ch {};
    std::cin >> ch;

    std::cout << "You've entered: '" << ch << "', which has ASCII code " << static_cast<int>(ch) << '\n';
    // static_cast allows us to convert one type to another, overriding the compilers warnings about loss of data etc.
    // Here, ch is a char that displays as the character we'd expect. But if we wanted it to display the ASCII character
    // that is actually stored, we can convert the type to an int so it'll return the integer that represents a character.

    // For example, when 'a' is entered the above program prints:
    // You've entered: 'a', which has ASCII code 97


    //std::cout << "You've entered: '" << ch << "', which has ASCII code " << print(ch) << '\n';
    // Implicit type conversion can be done by defining an int variable with the char type, to convert the type.
    // Or by passing a char type to a function that returns an int type. 

    // Explicit type conversions like the above static_cast are preferred. 
    // The above commented out line is simply for practice and understanding.

    return 0;
}