#include "Rational.h"

int Rational::gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void Rational::Normalize() {
    int d = gcd(numerator, denumerator);
    numerator /= d;
    denumerator /= d;
    if (denumerator < 0) {
        numerator *= -1;
        denumerator *= -1;
    }
}

Rational::Rational(int num, int denom) : numerator(num), denumerator(denom) {
    Normalize();
}

int Rational::getNumerator() const {
    return numerator;
}

int Rational::getDenumerator() const {
    return denumerator;
}

Rational Rational::operator + () const {
    return { numerator, denumerator };
}

Rational Rational::operator - () const {
    return { -numerator, denumerator };
}

Rational& Rational::operator += (const Rational& right) {
    numerator = numerator * right.denumerator + right.numerator * denumerator;
    denumerator *= right.denumerator;
    Normalize();
    return *this;
}

Rational& Rational::operator -= (const Rational& right) {
    numerator = numerator * right.denumerator - right.numerator * denumerator;
    denumerator *= right.denumerator;
    Normalize();
    return *this;
}

Rational& Rational::operator *= (const Rational& right) {
    numerator *= right.numerator;
    denumerator *= right.denumerator;
    Normalize();
    return *this;
}

Rational& Rational::operator /= (const Rational& right) {
    int temp = right.numerator;
    numerator *= right.denumerator;
    denumerator *= temp;
    Normalize();
    return *this;
}

Rational operator + (const Rational& left, const Rational& right) {
    Rational result = left;
    result += right;
    return result;
}

Rational operator - (const Rational& left, const Rational& right) {
    Rational result = left;
    result -= right;
    return result;
}

Rational operator / (const Rational& left, const Rational& right) {
    Rational result = left;
    result /= right;
    return result;
}

Rational operator * (const Rational& left, const Rational& right) {
    Rational result = left;
    result *= right;
    return result;
}

std::ostream& operator << (std::ostream& os, const Rational& rational) {
    return os << rational.getNumerator() << "/" << rational.getDenumerator();
}

bool operator == (const Rational& left, const Rational& right) {
    return left.getNumerator() == right.getNumerator() && left.getDenumerator() == right.getDenumerator();
}

bool operator != (const Rational& left, const Rational& right) {
    return !(left == right);
}

bool operator > (Rational& r1, Rational& r2) {
    Rational x = r1 - r2;
    if (((double)x.getNumerator() / (double)x.getDenumerator()) > 0) {
        return true;
    }
    return false;
}

bool operator < (Rational& r1, Rational& r2) {
    Rational x = r1 - r2;
    if (((double)x.getNumerator() / (double)x.getDenumerator()) < 0) {
        return true;
    }
    return false;
}

bool operator >= (Rational& r1, Rational& r2) {
    Rational x = r1 - r2;
    if (((double)x.getNumerator() / (double)x.getDenumerator()) >= 0) {
        return true;
    }
    return false;
}

bool operator <= (Rational& r1, Rational& r2) {
    Rational x = r1 - r2;
    if (((double)x.getNumerator() / (double)x.getDenumerator()) <= 0) {
        return true;
    }
    return false;
}