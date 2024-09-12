#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;
    int gcd(int a, int b);  // find greatest common divisor
public:
    Fraction(int num = 0, int den = 1);
    void input();
    void simplify();
    void output() const;
};

#endif
