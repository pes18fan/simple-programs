// program to ask a list of numbers from the user, sort them and display the
// sorted list, using pointers
#include <stdio.h>

int main(void) {
    int arr[10];
    int temp;
    int* ptr = arr;

    printf("Enter 10 numbers\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (*(ptr + i) > *(ptr + j)) {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }

    printf("Sorted list of numbers is\n");

    for (int i = 0; i < 10; i++) {
        printf("%d\n", *(ptr + i));
    }
}
