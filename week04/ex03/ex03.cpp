#include "Fraction.h"
#include <iostream>
using namespace std;

int main() {
    Fraction f1, f2;
    cout << "Input first Fraction:\n";
    f1.input();
    cout << "Input second Fraction:\n";
    f2.input();

    Fraction result = f1.add(f2);
    result.simplify();
    cout << "Sum: ";
    result.output();

    result = f1.subtract(f2);
    result.simplify();
    cout << "Difference: ";
    result.output();

    result = f1.multiply(f2);
    result.simplify();
    cout << "Product: ";
    result.output();

    result = f1.divide(f2);
    result.simplify();
    cout << "Quotient: ";
    result.output();

    return 0;
}
