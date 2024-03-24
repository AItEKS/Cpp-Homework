#pragma once
class Fraction {
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int num, int denom);
    Fraction(double num);
    ~Fraction();

    int getNumerator();
    int getDenominator();

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
    Fraction operator=(const Fraction& other);

    void display();
    void reduce();
};