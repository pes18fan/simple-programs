// WAP that reads two numbers and an arithmetic operator and performs operation as per the operator provided
// Uses switch case
#include <stdio.h>

int main(void) {
    float a, b;
    char op;

    printf("Enter two numbers\n");
    scanf("%f %f", &a, &b);

    printf("Enter an operator\n");
    scanf("%s", &op);

    switch (op) {
        case '+':
            printf("%f is the sum", a + b);
            break;
        case '-':
            printf("%f is the difference", a - b);
            break;
        case '*':
            printf("%f is the product", a * b);
            break;
        case '/':
            printf("%f is the quotient", a / b);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}