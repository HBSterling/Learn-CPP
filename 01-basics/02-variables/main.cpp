#include <iostream> // for std::cout

int main()
{
    int x;         // definition of variable x

    int z, y;      // we can define multiple variables of the same type like this
                   // However, best practice is to define each variable in a separate statement on it's own line
                   // and then use a single-line comment to document what it is used for.

    // Different forms of initialisation:

    int a;         // default-initialisation (no initialiser)

    // Traditional initialisation forms:
    int b = 5;     // copy-initialisation (initial value after equals sign)
    int c ( 6 );   // direct-initialisation (initial value in parenthesis)

    // Modern initialisation forms (preferred):
    int d { 7 };   // direct-list-initialisation (initial value in braces)
    int e {};      // value-initialisation (empty braces)

    // Best practice:
    // Prefer direct list initialisation or value-initialisation
    // Use direct list initialisation when using the initial value
    int f {0};
    std::cout << f; // As the value of 0 is used here, direct list initialisation is preferred.

    // Use value initialisation when the object's value is temporary and will be replaced.
    int g {};
    std::cin >> g; // We would replace whatever value g is set to here so inialising with a value would be meaningless

    return 0;
}