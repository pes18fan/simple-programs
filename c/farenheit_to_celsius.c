// wap to convert temperature to celsius from farenheit
#include <stdio.h>

int main() {
    float c, f;

    printf("Enter a temperature in farenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5/9;

    printf("In Celsius it is %f\n", c);

    return 0;
}
