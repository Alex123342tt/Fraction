#include "Fraction.h"
#include <iostream>
using namespace std;

int main() {
    Fraction a, b;

    cout << "������ ������ ���:\n";
    a.input();

    cout << "������ ������ ���:\n";
    b.input();

    cout << "\n����������:\n";
    cout << "a = "; a.print(); cout << endl;
    cout << "b = "; b.print(); cout << endl;

    cout << "a + b = "; a.add(b).print(); cout << endl;
    cout << "a - b = "; a.sub(b).print(); cout << endl;
    cout << "a * b = "; a.mul(b).print(); cout << endl;
    cout << "a / b = "; a.div(b).print(); cout << endl;
}