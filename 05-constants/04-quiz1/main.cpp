/*
Fix the below code - There are 3 issues:

1) '.\n' on the last line is a multi char input. Single quotes must be single chars.
2) std::uint8_t causes overloads because it's typically defined as a char type. Replace with int.
3) On line 21, we use the magic number 16. Although it's clear in this context, we should use a constexpr variable with the value of 16.
*/


#include <iostream>

int main()
{
  std::cout << "How old are you?\n";

  int age{};
  std::cin >> age;

  std::cout << "Allowed to drive a car in Texas: ";

  constexpr int minAge { 16 };
  
  if (age >= minAge)
      std::cout << "Yes";
  else
      std::cout << "No";

  std::cout << ".\n"; 

  return 0;
}


