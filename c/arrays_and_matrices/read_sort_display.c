// program to read a list of numbers using function read(), sort them with a
// function sort() and display the sorted list with the function display().
/* 1. Start
 * 2. Define a function display() taking in an array of ints arr and 
 *      an int size that:
 *      a. Loops from 0 to size, exclusive:
 *          I. Print the ith element of arr
 * 3. Define a function sort() taking in an array of ints arr and an int
 *      size that:
 *      a. Loops from 0 to size, loop variable i, exclusive:
 *          I. Loop from 0 to size, loop variable j, exclusive:
 *              i. If the jth element of arr is greater than the (j + 1)th
 *              element of arr:
 *                  A. Swap arr[j] and arr[j + 1] using temporary variable
 *      b. Call display passing in arr and size.
 * 4. Define a function read() taking in an array of ints arr and an int
 *      size that:
 *      a. Loops from 0 to size, exclusive:
 *          I. Reads an int to the ith element of arr
 *      b. Call sort passing in arr and size
 * 5. Define an array of ints arr of size 10.
 * 6. Call read passing in arr and 10.
 * 7. End
 */
#include <stdio.h>

void display(int ary[], int size) {
    printf("The sorted list is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", ary[i]);
    }
}

void sort(int ary[], int size) {
    for (int i = 0; i < size; i++) {
        int temp;
        for (int j = 0; j < size - i - 1; j++) {
            if (ary[j] > ary[j + 1]) {
                temp = ary[j]; 
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }

    display(ary, size);
}

void read(int ary[], int size) {
    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &ary[i]);
    }

    sort(ary, size);
}

int main(void) {
    int ary[10];
    read(ary, 10);
    return 0;
}
