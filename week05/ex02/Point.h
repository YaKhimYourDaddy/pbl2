#pragma once
#include <iostream>
using namespace std;

class Point {
private:
    double x; // Abscissa (x-coordinate)
    double y; // Ordinate (y-coordinate)

public:
    // Constructor
    Point(double x = 0.0, double y = 0.0);

    // Setters
    void setX(double x);
    void setY(double y);

    // Getters
    double getX() const;
    double getY() const;

    // Translate the point by dx and dy
    void translate(double dx, double dy);

    // Input and output functions
    void input();
    void output() const;
};
