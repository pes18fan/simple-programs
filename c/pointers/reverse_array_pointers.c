// a program that has a function reverse_array() that reverses an array passed
// to it and returns the reversed array. Then, display that reversed array. Do
// it all using pointers.
// 1. Start
// 2. Declare an integer array arr of size 10, and an integer n
// 3. Read n, and read n numbers into arr
// 5. Call reverse_array(arr, n)
//   5.1 Declare an integer variable temp
//   5.2 Loop from i = 0 to n / 2, exclusive
//     5.2.1 Swap *(arr + i) and *(arr + n - i - 1)
//   5.3 Return arr
// 6. Print arr
// 7. Stop
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
