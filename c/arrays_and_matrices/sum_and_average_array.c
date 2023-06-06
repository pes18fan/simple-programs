// program to initialize a one dimensional array of size 8 and display the
// sum and average of array elements
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
