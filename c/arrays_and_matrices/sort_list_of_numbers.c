// read a list of numbers, sort in ascending order and print the sorted list
/* 1. Declare an array of ints arr of size 10.
 * 2. Loop from 0 to 10, loop variable i, inclusive:
 *      I. Read an integer into ith element of arr
 * 3. Loop from 0 to size, loop variable i, exclusive:
 *      I. Loop from 0 to 10 - i - 1, loop variable j, exclusive:
 *          i. If the jth element of arr is greater than the (j + 1)th element
 *          of arr:
 *              A. Swap arr[j] and arr[j + 1] using temporary variable
 * 4. Loop from 0 to size, loop variable i, inclusive:
 *      I. Print the ith element of arr
 * 5. End
 */
#include <stdio.h>

int main(void) {
    int arr[10];

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        int temp;
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The sorted list is: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
