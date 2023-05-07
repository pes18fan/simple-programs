#include <stdio.h>

int main(void) {
    float a, b, c, d, e, total, percent;

    printf("Enter marks in 5 subjects\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    percent = ( total / 500.0 ) * 100.0;

    printf("The total is %.1f and the percentage is %.2f", total, percent);

    return 0;
}