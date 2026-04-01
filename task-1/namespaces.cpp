// Demonstrating Namespaces in C++
// Two namespaces, each with a function called "sum"
// One returns int, the other returns long

#include <iostream>

// First namespace - works with regular integers
namespace IntMath {
    int sum(int a, int b) {
        return a + b;
    }
}

// Second namespace - works with large (long) numbers
namespace LongMath {
    long sum(long a, long b) {
        return a + b;
    }
}

int main() {
    // Calling the int version from IntMath namespace
    int result1 = IntMath::sum(10, 20);
    std::cout << "IntMath::sum(10, 20) = " << result1 << std::endl;

    // Calling the long version from LongMath namespace
    long result2 = LongMath::sum(1000000L, 2000000L);
    std::cout << "LongMath::sum(1000000, 2000000) = " << result2 << std::endl;

    return 0;
}

/*
 * OUTPUT:
 * IntMath::sum(10, 20) = 30
 * LongMath::sum(1000000, 2000000) = 3000000
 *
 * KEY CONCEPT:
 * Even though both functions are named "sum", the namespace (IntMath:: or LongMath::)
 * tells the compiler exactly which one to use. This avoids naming conflicts.
 */
