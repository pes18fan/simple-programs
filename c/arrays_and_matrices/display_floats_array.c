// a program to enter 10 floating point numbers in an array and display it
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
