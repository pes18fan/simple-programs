#include <stdio.h>

int main(void) {
    int a = 0, b = 1, c = 0, n;

    printf("Enter number of fibonacci numbers\n");
    scanf("%d", &n);

    printf("%d\n%d\n", a, b);

    for (int i = 0; i < ( n - 2 ); i++) {
        c = a + b;

        printf("%d\n", c);

        a = b;
        b = c;
    }

    return 0;
}