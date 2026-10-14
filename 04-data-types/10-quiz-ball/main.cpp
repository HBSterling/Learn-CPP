/*
Specification of this program:
A short program to simulate a ball being dropped off of a tower.
To start, the user should be asked for the height of the tower in metres.

Assume normal gravity (9.8m/s²), and that the ball has no intial velocity.

Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4 and 5 seconds.
The ball should not go underneath the ground (Height 0).

Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball
has fallen after x seconds using the following formula:

distance fallen = gravity_constant * x_seconds² / 2.

Expected output:
Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.

Note: Depending on the height of the tower, the ball may not reach the ground within 5 seconds. 
This program can be improved later using loops.
Note: The ^ symbol isn't an exponent in C++. Implement the formula using multiplication instead of exponentation.
Note: Remember to use double literals for doubles, e.g '2.0' rather than '2'.


--------------------------------------------------------------------------------------------------------------------
Below is my solution. The program works as intended and prints the desired results.
However it was two flaws:

1) If the ball hits the ground, the remaining seconds are all printed saying the ball is on the ground:

Please enter the height of the tower in metres: 3
At 0 seconds, the ball is at height: 3 metres.
At 1 seconds, the ball is on the ground
At 2 seconds, the ball is on the ground
At 3 seconds, the ball is on the ground
At 4 seconds, the ball is on the ground
At 5 seconds, the ball is on the ground

This is an issue that learncpp's code also has. The program will be improved by using loops but we haven't covered those yet.
The below issue can be addressed.

2) The height variable has the ability to go below 0. Even if we don't print the figure.
If I adjust the code to print the height, using the above it'll print the following:

Please enter the height of the tower in metres: 3
At 0 seconds, the ball is at height: 3 metres.
At 1 seconds, the ball is at height: -1.9 and is on the ground
At 2 seconds, the ball is at height: -16.6 and is on the ground
At 3 seconds, the ball is at height: -41.1 and is on the ground
At 4 seconds, the ball is at height: -75.4 and is on the ground
At 5 seconds, the ball is at height: -119.5 and is on the ground

--------------------------------------------------------------------------------------------------
#include <iostream>

double getHeight()
{
    double height {};
    std::cout << "Please enter the height of the tower in metres: ";
    std::cin >> height;

    return height;
}

void calcHeight(double height, double x_seconds)
{
    double gravity_constant { 9.8 };
    double distance_fallen  { 0.0 };

    distance_fallen = gravity_constant * (x_seconds * x_seconds) / 2.0;
    height = height - distance_fallen;
    if (height > 0.0)
        std::cout << "At " << x_seconds << " seconds, the ball is at height: " << height << " metres.\n";
    else 

        std::cout << "At " << x_seconds << " seconds, the ball is at height: " << height << " and is on the ground\n";
}

int main()
{
    double height { getHeight() };
    double x_seconds { 0.0 };
    calcHeight (height, x_seconds);

    x_seconds = 1.0;
    calcHeight (height, x_seconds);

    x_seconds = 2.0;
    calcHeight (height, x_seconds);

    x_seconds = 3.0;
    calcHeight (height, x_seconds);

    x_seconds = 4.0;
    calcHeight (height, x_seconds);

    x_seconds = 5.0;
    calcHeight (height, x_seconds);

    return 0;
}


-----------------------------------------------------------------------------------------------
The below amended program should address these issues to create a more robust program.
I'm separating the solutions as the above I wrote on my own, whereas the below is after I took a glance at the solution on learncpp.
However, I will write the below without the solution open as practice. 
*/

#include <iostream>

// Gets the tower height from the user and returns it.
double getTowerHeight()
{
    double towerHeight {};
    std::cout << "Please enter the height of the tower in metres: ";
    std::cin >> towerHeight;

    return towerHeight;
}

// Returns the current ball height after the passed number of seconds.
double calcBallHeight(double towerHeight, double seconds)
{
    double gravity_constant { 9.8 };

    // Uses the formula: s = (u * t) + (a * t^2) / 2
    // Here, u (initial velocity) = 0, so (u * t) = 0.
    double distance_fallen { gravity_constant * (seconds * seconds) / 2.0 };
    double ballHeight { towerHeight - distance_fallen };

    // If the ball's height is negative, it would be under the ground. So we set to 0 to place it on the ground.
    if (ballHeight < 0.0)
        ballHeight = 0.0;

    return ballHeight;
}

// Prints the ball's height.
void printBallHeight(double towerHeight, double seconds)
{
    double ballHeight { calcBallHeight (towerHeight, seconds) };

    if (ballHeight == 0.0)
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";

    else 
        std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " metres\n";
}

int main()
{
    double towerHeight { getTowerHeight() };

    printBallHeight(towerHeight, 0);
    printBallHeight(towerHeight, 1);
    printBallHeight(towerHeight, 2);
    printBallHeight(towerHeight, 3);
    printBallHeight(towerHeight, 4);
    printBallHeight(towerHeight, 5);

    return 0;
}
