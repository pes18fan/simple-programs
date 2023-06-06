// convert a decimal number to a binary
#include <stdio.h>

int to_binary(int n) {
    int bin = 0, base = 1, rem = 0;

    while (n >= 1) {
        rem = n % 2;
        bin = rem * base + bin;
        base *= 10;
        n /= 2;
    }

    return bin;
}

int main(void) {
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    printf("Binary equivalent is %d", to_binary(n));

    return 0;
}
