#include <iostream>
#include <string_view>

void printSV(std::string_view str)
{
    std::cout << str << '\n';
}

int main()
{
    std::string_view s { "Hello World! " }; //Now a std::string_view
    printSV(s);

    return 0;
}