#include <iostream>

class Complex {
    float real, imag;

  public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    void show() { std::cout << real << " (real), " << imag << " (imag)\n"; }

    friend Complex operator+(Complex& a, Complex& b);
    friend Complex operator-(Complex& a, Complex& b);
};

Complex operator+(Complex& a, Complex& b) {
    return Complex(a.real + b.real, a.imag + b.imag);
}

Complex operator-(Complex& a, Complex& b) {
    return Complex(a.real - b.real, a.imag - b.imag);
}

int main() {
    Complex a(1, 2);
    Complex b(2, 3);

    Complex sum = a + b;
    Complex difference = a - b;

    sum.show();
    difference.show();
}
