#include <iostream>
#include <string>
#include <sstream>
#include "Rational.h"
#include "Fraction.h"
using namespace std;
                                            

void getFractionParts(const string& fractionStr, double& numerator, double& denumerator);

int main() {
    setlocale(LC_ALL, "");
    string a_s;
    double an, ad = 1;
    cout << "Введите число a: "; cin >> a_s;
    getFractionParts(a_s, an, ad);
    Fraction n(an);
    Fraction d(ad);
    Rational a(n.getNumerator() * d.getDenominator(), n.getDenominator() * d.getNumerator());
    cout << a;
}

void getFractionParts(const string& fractionStr, double& numerator, double& denumerator) {
    istringstream iss(fractionStr);
    char slash;
    iss >> numerator >> slash >> denumerator;
}
