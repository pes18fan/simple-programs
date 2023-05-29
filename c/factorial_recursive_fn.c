#include <stdio.h>

int fac(int n) {
    if (n <= 1) return n;
    else return n * fac(n - 1);
}

int main(void) {
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    printf("Its factorial is %d", fac(n));

    return 0;
}
