// a program to enter 10 floating point numbers in an array and display it
/* 1. Start
 * 2. Define an array of ints 'arr'
 * 3. Loop from 0 to 10, exclusive
 *     a. Read a float into the ith element of arr
 * 4. Loop from 0 to 10, exclusive
 *     a. Display the ith element of arr
 * 5. End
 */
#include <stdio.h>

int main(void) {
    float arr[10];
    int i;

    printf("Enter 10 floating point numbers: ");
    for (i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }

    printf("The numbers are: ");
    for (i = 0; i < 10; i++) {
        printf("%f ", arr[i]);
    }

    return 0;
}
