#include <iostream>

// Function asks user to enter a value.
// Returned value is the integer entered by the user
int getValueFromUser()
{
    std::cout << "Enter a number: \n";
    int input {};
    std::cin >> input;

    return input; // Returns the value the user entered back to the caller
}

void addValues(int x, int y)
{
    std::cout << x << " + " << y << " = " << x + y << '\n'; 
}

int main()
{
    //int x { getValueFromUser() };
    //int y { getValueFromUser() }; // Reusing the function to avoid repeated code.

    addValues(getValueFromUser(), getValueFromUser()); // Calls for a value from the user twice, to then be added together.

    return 0;
}