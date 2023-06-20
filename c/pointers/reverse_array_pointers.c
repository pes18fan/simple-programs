// a program that has a function reverse_array() that reverses an array passed
// to it and returns the reversed array. Then, display that reversed array. Do
// it all using pointers.
#include <stdio.h>

int* reverse_array(int* arr, int n) {
    int temp;

    for (int i = 0; i < n / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + n - i - 1);
        *(arr + n - i - 1) = temp;
    }

    return arr;
}

int main(void) {
    int arr[10];
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    reverse_array(arr, n);

    printf("Reversed array is\n");

    for (int i = 0; i < n; i++) {
        printf("%d\n", *(arr + i));
    }
}
