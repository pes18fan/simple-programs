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

    Complex operator+(Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    void show() { std::cout << real << " (real), " << imag << " (imag)\n"; }
};

int main() {
    Complex a(1, 2);
    Complex b(2, 3);

    Complex sum = a + b;
    Complex difference = a - b;

    sum.show();
    difference.show();
}
