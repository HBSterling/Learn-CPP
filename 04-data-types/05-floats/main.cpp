#include <iostream>
#include <limits>
#include <iomanip>

int main()
{
    std::cout << std::boolalpha;     // Prints bool as true/false rather than 1/0.
    std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
    std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
    std::cout << "long double: " << std::numeric_limits<long double>::is_iec559 << '\n';

    std::cout << 5.0 << '\n';        // std::cout drops the 0 decimal place by default.
    std::cout << 6.7f << '\n';       // This is output correctly
    std::cout << 9876543.21 << '\n'; // We have a rounding error here as the float can only hold 6 significant digits.
                                     // The 321 digits are lost.
                                     // This is printed as scientific notation.

    std::cout << std::setprecision(17);

    double d { 0.1 };
    std::cout << d << '\n';          // This actually outputs 0.10000000000000001, which is a slight rounding error

    double d1 { 1.0 };
    std::cout << d1 << '\n';

    double d2 { 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };
    std::cout << d2 << '\n';
    // When assigning 0.1 to a floating point number, we run into rounding errors as we see above with variable d.
    // Therefore even though we'd expect d2 to print as 1.0, it is printed as 0.99999999999999989 instead.

    return 0;
}