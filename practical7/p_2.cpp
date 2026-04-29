#include <iostream>
using namespace std;

class Complex {
    double real, imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(double r, double i) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator - (Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() {
        cout << real;
        if (imag >= 0) cout << "+";
        cout << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    cout << "Addition: ";
    c3.display();

    cout << "Subtraction: ";
    c4.display();

    int n;
    cin >> n;

    Complex arr[100];

    for (int i = 0; i < n; i++) {
        double r, im;
        cin >> r >> im;
        arr[i] = Complex(r, im);
    }

    cout << "All Complex Numbers:" << endl;
    for (int i = 0; i < n; i++) {
        arr[i].display();
    }

    return 0;
}
