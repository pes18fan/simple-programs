// program to ask a list of numbers from the user, sort them and display the
// sorted list, using pointers
// 1. Start
// 2. Declare an integer array arr of size 10, and an integer temp
// 3. Declare an integer pointer ptr and assign it to arr
// 4. Read 10 numbers into arr
// 5. Loop from i = 0 to 10, exclusive
//  5.1 Loop from j = i + 1 to 10, exclusive
//    5.1.1 If *(ptr + i) is greater than *(ptr + j), swap them
// 6. Print arr
// 7. Stop
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
