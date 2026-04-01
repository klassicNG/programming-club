// Unsigned Integer Underflow
// Analysing what happens when you subtract 1 from an unsigned int that is 0

#include <iostream>
using namespace std;

int main() {
    unsigned int x = 0;
    x = x - 1;
    cout << x << endl;
    return 0;
}

/*
 * =============================================
 * A. OUTPUT:
 * =============================================
 * 4294967295
 *
 * =============================================
 * B. WHY THIS HAPPENS (Unsigned Integer Underflow / Wrap-around):
 * =============================================
 *
 * An "unsigned int" can only hold NON-NEGATIVE values (0 and above).
 * On most modern systems, it is 32 bits wide, so it can store values from:
 *     0  to  4,294,967,295  (which is 2^32 - 1)
 *
 * When we do x = 0 - 1, we are trying to go BELOW zero.
 * But since x is unsigned, it cannot be negative!
 *
 * Instead of crashing or giving a negative number, C++ wraps the value
 * around to the TOP of the range. This is called "modular arithmetic"
 * (or integer wrap-around / underflow).
 *
 * Think of it like an old car odometer:
 *   If you're at 000000 and go backwards one step, it flips to 999999.
 *
 * Mathematically:
 *   x = (0 - 1) mod 2^32
 *   x = -1 mod 4,294,967,296
 *   x = 4,294,967,295
 *
 * So the output is 4294967295 — the maximum value of an unsigned int.
 *
 * NOTE: This behaviour is well-defined in C++ for UNSIGNED types.
 *       Doing the same with a SIGNED int would be undefined behaviour!
 */
