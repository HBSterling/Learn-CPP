#include <iostream>

int add(int x, int y, int z); // Function declaration - forward declaration of add()

int main()
{
    // The compiler knows what add() is as we declared add() above.
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n'; 

    return 0;
}

int add(int x, int y, int z) 
{
    return x + y + z;
}