#include "Point.h"

// Constructor
Point::Point(double x, double y) : x(x), y(y) {}

// Setters
void Point::setX(double x) {
    this->x = x;
}

void Point::setY(double y) {
    this->y = y;
}

// Getters
double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

// Translate the point by dx and dy
void Point::translate(double dx, double dy) {
    x += dx;
    y += dy;
}

// Input a point from the user
void Point::input() {
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
}

// Output the point to the console
void Point::output() const {
    cout << "Point(" << x << ", " << y << ")" << endl;
}
