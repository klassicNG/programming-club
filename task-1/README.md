# Task 1 — Work Problems
**Programming Club | 25th March 2026**

---

## Problem 1 — Mega Data Type Bit Width

### Question
A custom CPU has a maximum addressable width of 2 bytes. Given:
- A nibble = 4 bits
- A byte = 8 bits
- A word = 12 bits

A new data type called **mega** is defined as the largest data type supported by this CPU. How many bits does `mega` contain?

### Solution
The largest data type a CPU can support is limited by its maximum addressable width.

```
Max addressable width = 2 bytes
                      = 2 × 8 bits
                      = 16 bits
```

Since `mega` is defined as the **largest supported data type**, it must fit within that addressable width.

**∴ mega = 16 bits**

---

## Problem 2 — Namespaces in C++

### Question
Create a C++ program that demonstrates the use of namespaces:
- Create two namespaces, each with a function named `sum`
- One should return `int`, the other should return `long`
- Each function takes two numbers and returns their sum
- Call both functions in `main` and display the results

### Solution
See [`namespaces.cpp`](./namespaces.cpp)

### Key Concept
Namespaces allow multiple functions/variables to share the same name without conflicting. The `::` scope resolution operator is used to specify which namespace to pull from (e.g. `IntMath::sum` vs `LongMath::sum`).

### Output
```
IntMath::sum(10, 20) = 30
LongMath::sum(1000000, 2000000) = 3000000
```

---

## Problem 3 — Unsigned Integer Underflow

### Question
Given the following program:
```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int x = 0;
    x = x - 1;
    cout << x << endl;
    return 0;
}
```
**A.** What is the output?  
**B.** Explain why.

### Solution
See [`unsigned_underflow.cpp`](./unsigned_underflow.cpp)

**A. Output:**
```
4294967295
```

**B. Explanation:**  
An `unsigned int` cannot hold negative values. On a 32-bit system it stores values from `0` to `4,294,967,295` (2³² − 1). When you subtract 1 from 0, instead of going negative, the value **wraps around** to the top of its range — this is called modular arithmetic (or integer underflow/wrap-around). It behaves like an odometer rolling back from `000000` to `999999`.

```
x = (0 - 1) mod 2^32 = 4,294,967,295
```

> **Note:** This wrap-around is well-defined behaviour in C++ for `unsigned` types. The same operation on a *signed* int would be undefined behaviour.
