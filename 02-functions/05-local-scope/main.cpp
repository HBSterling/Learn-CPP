/*
#include <iostream>

int getValueFromUser(int val) // val is a function parameter
{
    std::cout << "Enter a value: ";
    std::cin >> val;

    return val;
}

int main()
{
    int x {};
    int num { getValueFromUser(x) }; // main() must pass x as an argument

    std::cout << "You entered " << num << '\n';

    // This is not the correct way to write this code. 
    // getValueFromUser has defined val as a function parameter.
    // because of this, main() must define x so that it has something to pass
    // into the argument. However, the actual value of x is next used.
    // And, the value that val is initialised with is never used.

    // Making the caller define and pass a variable that is never used adds
    // needless complexity.

    return 0;
}

The correct way to code this is below: */

#include <iostream>

int getValueFromUser()
{
    int val {}; // val is a local variable.
    std::cout << "Enter a value: ";
    std::cin >> val;

    return val;
}

int main()
{
    int num { getValueFromUser() }; // main does not need to pass anything
    
    std::cout << "You entered " << num << '\n';

    return 0;
}

/*  Best practice:
    When a variable is needed within a function:
    - Use a function parameter when the caller will pass in the initialisation 
      value for the variable as an argument.
    - Use a local variable otherwise.
*/
