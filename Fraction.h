#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int num; // чисельник
    int den; // знаменник

    void reduce();

public:
    Fraction(int n = 0, int d = 1);

    void input();
    void print() const;

    Fraction add(const Fraction& other) const;
    Fraction sub(const Fraction& other) const;
    Fraction mul(const Fraction& other) const;
    Fraction div(const Fraction& other) const;
};

#endif