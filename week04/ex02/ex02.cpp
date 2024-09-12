#include "Fraction.h"
#include <iostream>
using namespace std;

int main() {
    Fraction f1, f2;
    cout << "Input first Fraction:\n";
    f1.input();
    cout << "Input second Fraction:\n";
    f2.input();

    cout << "The bigger Fraction is: ";
    if (f1.compare(f2)) {
        f1.output();
    } else {
        f2.output();
    }
    return 0;
}
