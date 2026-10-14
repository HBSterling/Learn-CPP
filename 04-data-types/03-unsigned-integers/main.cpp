#include <iostream>

int main()
{
    unsigned short x { 65'535 }; // Largest 16-bit unsigned value possible
    std::cout << "x is: " << x << '\n';

    x = x + 1; // Sets x to 65,536. Will overflow.
    std::cout << "x + 1 is now set to: " << x << '\n';

    x = x + 1; // Sets x to 65,537. Another overflow.
    std::cout << "x + 1 again is now: " << x << '\n';

    std::cout << "Our variable has overflowed. We can reverse this by subtracting and the variable will wrap around the other way.\n";

    x = x - 3;
    std::cout << "x - 3 equals: " << x << '\n'; 

    return 0;
}