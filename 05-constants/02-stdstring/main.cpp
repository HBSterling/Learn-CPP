/*
Write a program that asks the user to enter their full name and age. As output, tell the user the sum of their age
and the number of characters in their name (Use the std::string::length() member function to get the length of 
the string). For simplicity, count any spaces in the name as a character.

Sample Output:

Enter your full name: John Doe
Enter your age: 32
Your age + length of name is: 40

Reminder: We need to be careful not to mix signed and unsigned values. std::string::length() returns an unsigned value. 
If you’re C++20 capable, use std::ssize() to get the length as a signed value. 
Otherwise, static_cast the return value of std::string::length() to an int.
*/

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    // Using std::getline along with std::ws, any whitespace is ignored so we can enter a full name with a space.
    std::getline(std::cin >> std::ws, name);

    //std::string::length() returns an unsigned integral value. As we want this to be an int, we'll use static_cast to convert it.
    int nameLength { static_cast<int> (name.length())};

    // Stores age as an int so we can do math with it.
    std::cout << "Enter your age: ";
    int age {};
    std::cin >> age;

    std::cout << "Your age + length of name is: " << age + nameLength << '\n';

    return 0;
}