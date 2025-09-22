#include "Fraction.h"
#include <iostream>
#include <numeric> 

using namespace std;

void Fraction::reduce() {
    int g = gcd(num, den);
    num /= g;
    den /= g;
    if (den < 0) {
        den = -den;
        num = -num;
    }
}

Fraction::Fraction(int n, int d) {
    if (d == 0) {
        cout << "Помилка: знаменник не може бути 0! Замінюю на 1." << endl;
        d = 1;
    }
    num = n;
    den = d;
    reduce();
}

void Fraction::input() {
    cout << "Введіть чисельник: ";
    cin >> num;
    cout << "Введіть знаменник: ";
    cin >> den;
    if (den == 0) {
        cout << "Помилка: знаменник не може бути 0! Замінюю на 1." << endl;
        den = 1;
    }
    reduce();
}

void Fraction::print() const {
    if (den == 1)
        cout << num;
    else
        cout << num << "/" << den;
}

Fraction Fraction::add(const Fraction& other) const {
    return Fraction(num * other.den + other.num * den,
        den * other.den);
}

Fraction Fraction::sub(const Fraction& other) const {
    return Fraction(num * other.den - other.num * den,
        den * other.den);
}

Fraction Fraction::mul(const Fraction& other) const {
    return Fraction(num * other.num, den * other.den);
}

Fraction Fraction::div(const Fraction& other) const {
    return Fraction(num * other.den, den * other.num);
}