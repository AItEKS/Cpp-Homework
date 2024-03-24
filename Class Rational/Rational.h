#pragma once
#include <iostream>

class Rational {
private:
	int numerator, denumerator;

	int gcd(int a, int b);

	void Normalize();

public:
	Rational(int num = 0, int denom = 1);

	int getNumerator() const;
	int getDenumerator() const;

	//Rational mysqrt(Rational r);

	Rational operator + () const;
	Rational operator - () const;

	Rational& operator += (const Rational& right);
	Rational& operator -= (const Rational& right);
	Rational& operator *= (const Rational& right);
	Rational& operator /= (const Rational& right);
};

std::ostream& operator << (std::ostream& os, const Rational& rational);

Rational operator + (const Rational& left, const Rational& right);
Rational operator - (const Rational& left, const Rational& right);
Rational operator / (const Rational& left, const Rational& right);
Rational operator * (const Rational& left, const Rational& right);

bool operator == (const Rational& left, const Rational& right);
bool operator != (const Rational& left, const Rational& right);
bool operator > (Rational& r1, Rational& r2);
bool operator < (Rational& r1, Rational& r2);
bool operator >= (Rational& r1, Rational& r2);
bool operator <= (Rational& r1, Rational& r2);