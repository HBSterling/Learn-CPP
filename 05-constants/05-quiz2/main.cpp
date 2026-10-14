/*
Write a program that asks for the name and age of two people, then prints which one is older:
Here is the sample output from one run of the program:

Enter the name of person #1: John Bacon
Enter the age of John Bacon: 37
Enter the name of person #2: David Jenkins
Enter the age of David Jenkins: 44
David Jenkins (age 44) is older than John Bacon (age 37).


Below is my solution. The solution works but isn't optimal as it doesn't make correct use of std::string_view.
We shouldn't be passing a std::string into a function parameter as it's expensive as detailed in the lessons.

Also, I haven't used consts in the main function.
------------------------------------------------------------------------------------------------
#include <iostream>
#include <string>

std::string getUserName(int num)
{
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name {};
    std::getline( std::cin >> std::ws, name );

    return name;
}

int getUserAge(std::string name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age {};
    std::cin >> age;

    return age;
}

int main()
{
    std::string name1 { getUserName(1) };
    int age1 { getUserAge(name1) };

    std::string name2 { getUserName(2) };
    int age2 { getUserAge(name2) };

    if (age1 > age2)
        std::cout << name1 << " (aged " << age1 << ") is older than " << name2 << " (aged " << age2 << ").\n";

    else 
        std::cout << name2 << " (aged " << age2 << ") is older than " << name1 << " (aged " << age1 << ").\n";

    return 0;
}
---------------------------------------------------------------------------------------------------------

Below is my solution amended with those corrections, plus I've moved the print section into a function as practice for passing
std::string parameters using std::string_view.
*/

#include <iostream>
#include <string>
#include <string_view>

std::string getUserName(int num)
{
    std::cout << "Enter the name of person #" << num << ": ";
    std::string name {};
    std::getline( std::cin >> std::ws, name );

    return name;
}

int getUserAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age {};
    std::cin >> age;

    return age;
}

void printOlder(std::string_view name1, int age1, std::string_view name2, int age2)
{
    if (age1 > age2)
        std::cout << name1 << " (aged " << age1 << ") is older than " << name2 << " (aged " << age2 << ").\n";

    else 
        std::cout << name2 << " (aged " << age2 << ") is older than " << name1 << " (aged " << age1 << ").\n";
}

int main()
{
    const std::string name1 { getUserName(1) };
    const int age1 { getUserAge(name1) };

    const std::string name2 { getUserName(2) };
    const int age2 { getUserAge(name2) };

    printOlder(name1, age1, name2, age2);

    return 0;
}