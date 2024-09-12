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

Fraction Fraction::add(const Fraction& other) const {
    int num = numerator * other.denominator + other.numerator * denominator;
    int den = denominator * other.denominator;
    return Fraction(num, den);
}

Fraction Fraction::subtract(const Fraction& other) const {
    int num = numerator * other.denominator - other.numerator * denominator;
    int den = denominator * other.denominator;
    return Fraction(num, den);
}

Fraction Fraction::multiply(const Fraction& other) const {
    int num = numerator * other.numerator;
    int den = denominator * other.denominator;
    return Fraction(num, den);
}

Fraction Fraction::divide(const Fraction& other) const {
    int num = numerator * other.denominator;
    int den = denominator * other.numerator;
    return Fraction(num, den);
}
