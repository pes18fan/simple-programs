// calculate and print the terms of the following series upto nth terms:
// -10, -12, -14, -18, -26, -42, -74
#include <stdio.h>

int main(void) {
    int t1 = -10, n, iter_amt = -2;

    printf("Enter the number till which you want to calculate\n");
    scanf("%d", &n);

    printf("%d\t", t1);

    for (int i = 0; i < n - 1; i++) {
        printf("%d\t", t1 + iter_amt);
        iter_amt *= 2;
    }

    return 0;
}
