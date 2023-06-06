#include <stdio.h>

int main(void) {
    int a, b, max, hcf = 1, lcm;

    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);

    max = (a > b) ? a : b;

    for (int i = 1; i <= max; i++) {
        if (a % i == 0 && b % i == 0) hcf = i;
    }

    lcm = ( a * b ) / hcf;

    printf("hcf is %d and lcm is %d", hcf, lcm);

    return 0;
}