#include <iostream>

// Below is my solution for quiz question #2 from this page.
// It works but learncpp broke the below into a function. For the sake of practice I'll do the same.
// I'll also add my own section to check if the digit entered is outside of the range 0-9.
/*
int main()
{
    std::cout << "A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself\n";
    std::cout << "Please enter a number between 0-9\n";

    int x{};
    std::cin >> x;

    if (x == 2)
        std::cout << "This digit is prime\n";
    else if (x == 3)
        std::cout << "This digit is prime\n";
    else if (x == 5)
        std::cout << "This digit is prime\n";
    else if (x == 7)
        std::cout << "This digit is prime\n";
    else 
        std::cout << "This digit is not prime\n";

    return 0;
}
*/

bool isPrime(int x)
{
    if ( x == 2 )
        return true;
    else if ( x == 3) 
        return true;
    else if ( x == 5 )
        return true;
    else if ( x == 7 )
        return true;

    else
        return false; // If the user did not enter any of the above digits, the digit isn't prime.
}

int main()
{
    std::cout << "A prime number is a whole number greater than 1 that can only be divided evenly by 1 and itself\n";
    std::cout << "Please enter a number between 0-9: ";

    int x{};
    std::cin >> x;

    if ( x < 0 )
        std::cout << "Digit is below 0, please try again\n";
    else if ( x > 9 )
        std::cout << "Digit is above 9, please try again\n";
    else if ( isPrime(x) )
        std::cout << "The digit is prime\n";
    else    
        std::cout << "The digit is not prime\n";

    return 0;
}
