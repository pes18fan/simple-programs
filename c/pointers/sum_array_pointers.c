// find the sum of all the elements of an array using pointers
#include <stdio.h>

int main(void) {
    int arr[10];
    int sum = 0;

    printf("Enter 10 numbers\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < 10; i++) {
        sum += *(arr + i);
    }

    printf("Sum of all elements of array = %d", sum);
}
