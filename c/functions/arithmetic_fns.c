// add, subtract, multiply and divide two integers using user defined 
// type functions with a return type.
#include <stdio.h>

int sum(int a, int b) { return a + b; }
int diff(int a, int b) { return a - b; }
int prod(int a, int b) { return a * b; }
int quot(int a, int b) { return a / b; }

int main(void) {
    int a, b;

    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);

    printf("The sum is %d\n", sum(a, b));
    printf("The difference is %d\n", diff(a, b));
    printf("The product is %d\n", prod(a, b));
    printf("The quotient is %d\n", quot(a, b));

    return 0;
}
