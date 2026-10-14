#include <iostream>

int main()
{
    int x { 2'147'483'647 }; // Maximum value of a 4 byte integer
    // The ' allow us to separate the digits like we'd use a , in normal text.
    // The , in this instance wouldn't compile.

    std::cout << x << '\n';

    x = x + 1; // As the above defined x is at the maximum value, this expression creates an overflow.
    std::cout << x << '\n';

    return 0;
}