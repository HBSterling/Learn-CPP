#include <iostream>

void doSomething()
{

#ifdef PRINT // Even though PRINT was defined in main.cpp which is what called this function,
             // that doesn't have any impact on any of the code in function.cpp here.
    std::cout << "Printing!\n";
#endif

#ifndef PRINT
    std::cout << "Not Printing!\n";
#endif

}