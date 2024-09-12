#include <iostream>
#include "Point.h"
using namespace std;

int main() {
    Point p1; // Create a point with default coordinates (0, 0)

    cout << "Enter coordinates for the point:" << endl;
    p1.input(); // Input coordinates from user

    cout << "Original point: ";
    p1.output(); // Display the original point

    p1.translate(5.0, -3.0); // Translate the point by (5, -3)
    
    cout << "Translated point: ";
    p1.output(); // Display the translated point

    return 0;
}


