#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    printf("Their product is %d", a * b);

    return 0;
}