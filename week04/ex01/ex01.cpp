#include "Fraction.h"
#include <iostream>
using namespace std;

int main() {
    Fraction f;
    cout << "Input a Fraction:\n";
    f.input();
    cout << "The given Fraction: ";
    f.output();
    f.simplify();
    cout << "The given Fraction after being simplified: ";
    f.output();
    return 0;
}
