/*
Specification of this program:
The user is to be asked to enter 2 floating point numbers - using doubles.
The user is then asked to enter one of the following mathematical symbols: + , - , * or /.
The program computes the answer on the two numbers the user entered, then prints the results.
If the user inputs an invalid symbol, the program should print nothing.

Example of output:
Enter a double value: 6.2
Enter a double value: 5
Enter +, -, *, or /: *
6.2 * 5 is 31

I should be able to do this without a hint now. 
This was one of the first suggested programs that I wasn't able to do at first.


-----------------------------------------------------------------------------------------------


double calc(double d1, double d2, char op)
{
    if ( op == '+' )
        return d1 + d2;
    
    else if ( op == '-' )
        return d1 - d2;

    else if ( op == '*' )
        return d1 * d2;

    else if ( op == '/' )
        return d1 / d2;

    else 
        std::cout << "Incorrect operator chosen. Please try again.\n";
        return 0; ??
}

This function worked, however the issue is the return if the operator entered is not what was expected.
This function needs to return a double for the other IF statements to work. 
To solve the issue, I think multiple functions for each operator is cleaner.


-------------------------------------------------------------------------------------------------------------
Below is my solution. Uses a function for each calculation and this program functions as expected and handles the errors.
However, may be inefficient and not the best practice to great all of these into functions.
I'll now use the hints from learncpp to rewrite a cleaner solution.

#include <iostream>

double add (double d1, double d2)
{
    return d1 + d2;
}

double subtract (double d1, double d2)
{
    return d1 - d2;
}

double multiply (double d1, double d2)
{
    return d1 * d2;
}

double divide (double d1, double d2)
{
    return d1 / d2;
}


int main()
{

    std::cout << "Enter a double value: ";
    double d1 {};
    std::cin >> d1;

    std::cout << "Enter a second double value: ";
    double d2 {};
    std::cin >> d2;

    std::cout << "Enter +, -, *, or /: ";
    char op {};
    std::cin >> op;

    if ( op == '+' )
        std::cout << d1 << " + " << d2 << " is: " << add      ( d1, d2 ) << '\n';

    else if ( op == '-' )
        std::cout << d1 << " - " << d2 << " is: " << subtract ( d1, d2 ) << '\n';

    else if ( op == '*' )
        std::cout << d1 << " * " << d2 << " is: " << multiply ( d1, d2 ) << '\n';

    else if ( op == '/' )
        std::cout << d1 << " / " << d2 << " is: " << divide   ( d1, d2 ) << '\n';

    else   
        std::cout << "Incorrect operator chosen. Please try again.\n";

    return 0;
}

*/

#include <iostream>

double getDouble() // Requests the user to enter a double for the calculation.
{
    double d {};
    std::cout << "Enter a double value: ";
    std::cin >> d;

    return d;
}

char getOperator() // Requests the user to enter an operation. 
                   // If an incorrect operation is entered, we handle this error elsewhere.
{
    char op {};
    std::cout << "Enter +, -, *, or /: ";
    std::cin >> op;

    return op;
}

void calculate(double d1, double d2, char op) // Takes in the inputted doubles and operator, and calculates.
{
    if      ( op == '+' ) // Addition
        std::cout << d1 << " + " << d2 << " is: " << d1 + d2 << '\n';

    else if ( op == '-' ) // Subtraction
        std::cout << d1 << " - " << d2 << " is: " << d1 - d2 << '\n';

    else if ( op == '*' ) // Multiplication
        std::cout << d1 << " * " << d2 << " is: " << d1 * d2 << '\n';

    else if ( op == '/' ) // Division
        std::cout << d1 << " / " << d2 << " is: " << d1 / d2 << '\n';

    else // Error handling if any other character is input as the operator.
        std::cout << "Incorrect operator chosen. Please try again.\n";
}


int main()
{
    double d1 { getDouble()   }; // Initilaise calling the function to reduce the size of the code.
    double d2 { getDouble()   };
    char   op { getOperator() };

    calculate (d1, d2, op); // Calculates and prints in the same function to reduce size of the code again.

    return 0;
}