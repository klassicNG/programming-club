#include <iostream>

/**
 * Question 4: Structures
 * Defining a Rectangle and calculating its area.
 */
struct Rectangle {
    int width;
    int breadth;
};

void printArea(Rectangle r) {
    int area = r.width * r.breadth;
    std::cout << "Rectangle Area: " << area << std::endl;
}

int main() {
    Rectangle r1;
    r1.width = 10;   // Assigning sample values
    r1.breadth = 5;

    printArea(r1);

    return 0;
}
