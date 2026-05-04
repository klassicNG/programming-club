#include <iostream>

/**
 * Question 3: Reference Variables
 * Using an alias to modify the original variable.
 */
int main() {
    int x = 25;
    int &ref = x; // Create reference

    ref = 80; // Change x to 80 via reference

    std::cout << "Value of x: " << x << std::endl;

    return 0;
}
