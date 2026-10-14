/*  For debugging inside of Codespaces, we must compile the below code
    " g++ main.cpp -g -o main "

    Now we can set a breakpoint.

    Then if we press F5 we can start debugging.

    Step Over means we execute the next statement in the normal execution
    of the program
    Whereas Step Into will enter function calls and execute them line by line.
    Finally, Step Out will exit a function by running the rest of the function's code

    Use a static analysis tool to help find areas where code is non-compliant with
    best practices.
    Clang Tidy will be used in this GitHub Codespaces project.
*/

#include <iostream>

/*
void printValue(int value)
{
    std::cerr << value << '\n';
}
*/

void a()
{
    std::cerr << "a() called\n";
}

void b()
{
    std::cerr << "b() called\n";
}

int main()
{
    //printValue(5);

    int x {1};
    std::cout << x << '\n';

    x = x + 2;
    std::cout << x << '\n';

    x = x + 3;
    std::cout << x << '\n';

    a();
    b();

    if (x == 5)
    {
        std::cout << "x is 5\n";
    }

    return 0;
}