// add, subtract, multiply and divide two integers using user defined 
// type functions with a return type.
#include <stdio.h>

float sum(float a, float b) {
    return a + b;
}

float diff(float a, float b) {
    return a - b;
}

float prod(float a, float b) {
    return a * b;
}

float quot(float a, float b) {
    return a / b;
}

int main(void) {
    float a, b;

    printf("Enter two numbers\n");
    scanf("%f%f", &a, &b);

    printf("The sum is %f\n", sum(a, b));
    printf("The difference is %f\n", diff(a, b));
    printf("The product is %f\n", prod(a, b));
    printf("The quotient is %f\n", quot(a, b));

    return 0;
}
