#include <iostream>

int main()
{
    std::cout << std::boolalpha; // This changes the outputs of Booleans from 1 & 0 to true and false.

    bool b1 { true };   // We use true and false to initalise and assign Boolean variables.
    bool b2 { false };
    b1 = false;
    bool b3 {};         // By default, Booleans are set to false.

    std::cout << "b1 is set to: " << b1 << '\n';
    std::cout << "b2 is set to: " << b2 << '\n';
    std::cout << "b3 is set to: " << b3 << '\n';

    // To flip the values, we use a ! at the start.

    bool b4 { !true };  // Sets b4 to false.
    bool b5 { !false }; // Sets b5 to true.

    std::cout << "b4 is set to: " << b4 << '\n';
    std::cout << "b5 is set to: " << b5 << "\n\n";

    // We must be careful when inputting Boolean variables. By default, std::cin only accepts numeric input for Boolean variables.
    // 0 is false, and 1 is true. But any other numeric value will be interpreted as true.
    // And non-numeric value will be interpreted as false.

    // The below example highlights this:
    //bool b{}; // By default, initialised to false.
    //std::cout << "Enter a boolean value: ";
    //std::cin >> b;
    //std::cout << "You've entered: " << b << '\n';

    // We can instead allow std::cin to accept true and false correctly by using std::boolalpha.
    // However, boolalpha will case numeric values to no longer be accepted, causing them to evalute to false everytime,
    // even if you enter "1" which should be "true".

    bool b{};
    std::cout << "Enter a boolean value: ";
    
    std::cin >> std::boolalpha; // Allows user to input "true" or "false" - This is case sensitive.
    std::cin >> b;

    std::cout << std::boolalpha; // Changes the output from 1 & 0 to true & false.
    std::cout << "You've entered: " << b << '\n';

    return 0;
}