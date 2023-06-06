// wap to find if a number is positive or negative
#include <stdio.h>

int main() {
    float num;

    printf("Enter a number");
    scanf("%f", &num);

    if (num > 0) printf("The number is positive");
    else if (num <= 0) printf("The number is negative or zero");

    return 0;
}
