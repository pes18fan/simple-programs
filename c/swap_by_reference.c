// wqp to swao two variable values by reference
#include <stdio.h>

void swap(int*, int*);

int main() {
    int a = 69, b = 420;

    printf("Before swap: %d %d\n", a, b);

    swap(&a, &b);

    printf("After swap: %d %d\n", a, b);
}

void swap(int* x, int* y) {
    int temp;

    temp = *y;
    *y = *x;
    *x = temp;
}
