#include "Fraction.h"
#include <iostream>
using namespace std;

int main() {
    Fraction a, b;

    cout << "¬вед≥ть перший др≥б:\n";
    a.input();

    cout << "¬вед≥ть другий др≥б:\n";
    b.input();

    cout << "\n–езультати:\n";
    cout << "a = "; a.print(); cout << endl;
    cout << "b = "; b.print(); cout << endl;

    cout << "a + b = "; a.add(b).print(); cout << endl;
    cout << "a - b = "; a.sub(b).print(); cout << endl;
    cout << "a * b = "; a.mul(b).print(); cout << endl;
    cout << "a / b = "; a.div(b).print(); cout << endl;
}