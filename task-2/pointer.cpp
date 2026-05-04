#include <iostream>

/**
 * Question 2: Pointer Operations
 * Storing addresses and modifying values via dereferencing.
 */
int main() {
    int num = 50;
    int* ptr = &num; // Store address

    std::cout << "Initial value via pointer: " << *ptr << std::endl;

    *ptr = 100; // Change value using pointer
    std::cout << "New value after pointer modification: " << num << std::endl;

    return 0;
}
