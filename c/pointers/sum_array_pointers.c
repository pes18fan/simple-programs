// find the sum of all the elements of an array using pointers
// 1. Start
// 2. Define an array of size 10 and a variable sum initialized to 10
// 3. Loop from 0 to 10, exclusive:
//   a. Read an element into arr + i
// 4. Loop from 0 to 10, exclusive:
//   a. Add *(arr + i) into sum
// 5. Print sum
// 6. Stop
#include <stdio.h>

int main(void) {
    int arr[10];
    int sum = 0;

    printf("Enter 10 numbers\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < 10; i++) {
        sum += *(arr + i);
    }

    printf("Sum of all elements of array = %d", sum);
}
