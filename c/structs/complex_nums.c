// define a typedef struct Complex to read two complex numbers and perform
// addition and subtraction of these two complex numbers and display the
// results.
#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

Complex add_cmp(Complex a, Complex b) {
    return (Complex){
        a.real + b.real,
        a.imaginary + b.imaginary
    };
}

Complex subtract_cmp(Complex a, Complex b) {
    return (Complex){
        a.real - b.real,
        a.imaginary - b.imaginary
    };
}

int main(void) {
    Complex a, b;

    printf("Enter real and imaginary parts of the first complex number\n");
    scanf("%lf%lf", &a.real, &a.imaginary);

    printf("Enter real and imaginary parts of the second complex number\n");
    scanf("%lf%lf", &b.real, &b.imaginary);

    Complex sum = add_cmp(a, b);
    Complex difference = subtract_cmp(a, b);

    printf("Sum = %.3lf + %.3lfi\n", sum.real, sum.imaginary);
    printf("Difference = %.3lf + %.3lfi\n", difference.real, difference.imaginary);
}
