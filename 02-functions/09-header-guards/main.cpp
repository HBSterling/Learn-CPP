// Best practise for #includes: 
// 1) The paired header file (ie. add.cpp should #include "add.h")
// 2) Other headers from the same project (ie. #include "mymath.h")
// 3) 3rd party library headers (i.e #include <boost/tuple/tuple.hpp>)
// 4) Standard library headers (i.e #include <iostream>)

// Headers for each grouping should be sorted alphabetically.

#include "square.h"
#include <iostream>

int main()
{
    std::cout << "A square has " << getSquareSides() << " sides\n";
    std::cout << "A square of length 5 has a perimeter length of " << getSquarePermiter(5) << '\n';

    return 0;
}