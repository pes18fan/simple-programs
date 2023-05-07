#include <stdio.h>

int main(void) {
    float a, b, c, d, e, sum, avg;

    printf("Enter five numbers\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;
    avg = sum / 5;

    printf("The sum is %f and the average is %f", sum, avg);

    return 0;
}