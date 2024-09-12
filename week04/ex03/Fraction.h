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
    bool compare(const Fraction& other) const;
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;

};

#endif
