#include "io.h"

int main()
{
    // Calculates the sum on initialisation to later pass to writeAnswer();
    int total { readNumber() + readNumber() };

    writeAnswer(total);

    return 0;
}