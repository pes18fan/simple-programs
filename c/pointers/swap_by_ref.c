// swap two numbers by reference
#include <stdio.h>

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    int a, b;

    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("a = %d, b = %d", a, b);
}
