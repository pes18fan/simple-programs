// swap two numbers by reference
// 1. Start
// 2. Declare two integer variables a, b
// 3. Read a, b
// 4. Call swap(&a, &b)
//   4.1 Swap *a and *b
// 5. Print a, b
// 6. Stop
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
