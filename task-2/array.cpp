#include <iostream>

/**
 * Question 1: Array Iteration
 * Demonstrates normal for-loop and for-each loop.
 */
int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    std::cout << "Using normal for loop:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }

    std::cout << "\n\nUsing for-each loop:" << std::endl;
    for (int val : numbers) {
        std::cout << val << " ";
    }
    
    std::cout << std::endl;
    return 0;
}
