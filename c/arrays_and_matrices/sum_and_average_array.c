// program to initialize a one dimensional array of size 8 and display the
// sum and average of array elements
/* 1. Start
 * 2. Define an array of ints arr of size 8, int sum equaling 0 and int avg
 * 3. Loop from 0 to 8, loop variable i, exclusive:
 *      I. Read an int to ith element of arr
 *      II. Increment sum by the ith element of arr
 * 4. Assign sum / 8 to avg
 * 5. Display sum and avg
 * 6. End
 */
#include <stdio.h>

int main(void) {
    int arr[8], sum = 0, avg;

    printf("Enter 8 floating point numbers: \n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 8;

    printf("The sum of the numbers is: %d\n", sum);
    printf("The average of the numbers is: %d\n", avg);

    return 0;
}
