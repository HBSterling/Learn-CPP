#include <iostream>

// User-defined function is defined here.
// Must be before main, so that it exists before main attempts to call the function.
void doPrint()
{
    std::cout << "In doPrint()\n";
}

int main()
{
    std::cout << "Starting main()\n";   // Executed before doPrint()

    doPrint();  // Interrupts main() by making a function call to doPrint().
                // main() is the caller.

    std::cout << "Ending main()\n";     // Executed after doPrint()

    return 0;
}