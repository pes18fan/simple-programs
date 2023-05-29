// convert a decimal number to a binary
#include <stdio.h>

int to_binary(int n) {
    int bin_rev = 0, bin = 0;

    while (n >= 1) {
        int rem = n % 2;
        bin_rev = ( bin_rev * 10 ) + rem;
        n /= 2;
    }

    while (bin_rev >= 1) {
       int rem = bin_rev % 10;
       bin = ( bin * 10 ) + rem;
       bin_rev /= 10;
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
