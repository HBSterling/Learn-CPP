// To begin, I'm looking to work towards the following goals:

// 1) Create a function named max that works out which of two numbers are larger
// 2) Create a function called calculateGrade that will calculate a grade based on test scores
// 3) Create a function named printEmployee that will print an employee's information to the console

// We will start with these goals as during my first reading of Learn C++.com, 
// I could not figure these out on my own without further reading or research on 06/08/26.

// The goal is to code these without any AI assistance for the sake of my own development.

#include <iostream>

int getValueFromUser{}
{
    std::cout << "Enter a number: \n";
    int input{};
    std::cin >> input;

    return input;

}

int max()
{
    int x {getValueFromUser};
    int y {getValueFromUser};  
    
    int num{};

    if x > y
        return x;

    if y > x
        return y;
}

int main()
{
    max();

    return 0;
}