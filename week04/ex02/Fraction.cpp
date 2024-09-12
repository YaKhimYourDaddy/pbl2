#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {}

int Fraction::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Fraction::input() {
    cout << "Input numerator: ";
    cin >> numerator;
    cout << "Input denominator: ";
    cin >> denominator;
}

void Fraction::simplify() {
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
}

void Fraction::output() const {
    cout << numerator << "/" << denominator << endl;
}


bool Fraction::compare(const Fraction& other) const {
    return (numerator * other.denominator > other.numerator * denominator);
}
