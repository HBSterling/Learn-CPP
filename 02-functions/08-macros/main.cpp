#include "Alex.h" // Copies #define MY_NAME from Alex.h here
#include <iostream>

#define PRINT

void doSomething(); // Forward declaration for function doSomething()

int main()
{

    //Preprocessor replaces MY_NAME with "Alex"
    std::cout << "My name is: " << MY_NAME << '\n'; 

    doSomething();

    return 0;
}