#include "Fraction.h"
#include <iostream>

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    reduce();
}

Fraction::Fraction(double num) {
    int whole = static_cast<int>(num);
    double fraction = num - whole;
    numerator = whole * 100 + fraction * 100;
    denominator = 100;
    reduce();
}

Fraction::~Fraction() {
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

void Fraction::display() {
    std::cout << numerator << "/" << denominator << std::endl;
}

void Fraction::reduce() {
    for (int i = 2; i <= numerator; i++) {
        while (numerator % i == 0 && denominator % i == 0) {
            numerator /= i;
            denominator /= i;
        }
    }
}

Fraction Fraction::operator+(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator + denominator * other.numerator;
    result.denominator = denominator * other.denominator;
    result.reduce();
    return result;
}

Fraction Fraction::operator-(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator - denominator * other.numerator;
    result.denominator = denominator * other.denominator;
    result.reduce();
    return result;
}

Fraction Fraction::operator*(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    result.reduce();
    return result;
}

Fraction Fraction::operator/(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    result.reduce();
    return result;
}

Fraction Fraction::operator=(const Fraction& other) {
    numerator = other.numerator;
    denominator = other.denominator;
    return *this;
}
