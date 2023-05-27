#include <stdio.h>

int main(void) {
    int a, b, hcf;

    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);

    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    hcf = a;

    printf("The HCF is %d", hcf);

    return 0;
}
