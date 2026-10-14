#include <iostream>
#include <cstdint> // for fixed width integers
#include <cstddef> // for std::size_t

int main()
{
    int x { 32767 };            // Max size if int is 16-bits. 
    x = x + 1;                  // Will overflow if int is 16-bits, but if int is 32-bits this is okay.

    std::cout << x << '\n';


    std::int32_t y { 32767 };   // This sets the variable to always be a 32-bit integer
    y = y + 1;                  // Produces the same result on my machine, but it's more robust to work with other architechture.
    std::cout << y << '\n';


    std::int8_t z { 65 };       // Initalise an 8-bit integral type with a value of 65.
    std::cout << z << '\n';     // We should expect this to the print 65... But it prints "A".
    // This is becasue the 8-bit fixed width integer types are often treated like chars instead of integer values.
    // This varies from system to system. The 16-bit and wider integral types are not subject to this issue.

    // Least types provide the smallest signed/unsigned integer type.
    std::cout << "least 8:  " << sizeof(std::int_least8_t)  * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << '\n';
    // Meanwhile fast types provides the fastest signed/unsigned integer type.
    // By fastest, we mean the integral type that can be processed most quickly by the CPU.
    std::cout << "fast 8:   " << sizeof(std::int_fast8_t)   * 8 << " bits\n";
    std::cout << "fast 16:  " << sizeof(std::int_fast16_t)  * 8 << " bits\n";
    std::cout << "fast 32:  " << sizeof(std::int_fast32_t)  * 8 << " bits\n";
    // On my machine, this outputs "64 bits" for both fast 16, and fast 32.
    // This is because 64 bit integers are faster to process than 16 or 32 bit integers on my machine.

    std::cout << sizeof(int) << '\n';
    // sizeof returns a value of type std::size_t.
    // std::size_t is an alias for an implementation-defined unsigned integral type.
    // The compiler decides if std::size_t is an unsigned int, long, long long, etc.

    return 0;
}