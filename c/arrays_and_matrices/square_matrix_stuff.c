// program to read a square matrix and print the same matrix by replacing its
// diagonal elements by minimum value among the elements of original matrix
/* 1. Start
 * 2. Define a function replace taking in an array of arrays of ints arr, int 
 * size and int min
 *      I. Print out the values of arr using a nested loop
 *          a. If the row number equals the column number, print min instead
 * 3. Define a function display taking in an array of arrays of ints arr and
 * int size
 *      I. Define an int min as the first element of the first element of arr
 *      II. Loop from 0 to size, exclusive:
 *          a. Print out the values of arr using a nested loop
 *              A. If the current element is less than min, assign it to min
 *      III. Call replace passing in arr, size and min
 * 4. Define a function read taking in an array of arrays of ints arr and int
 * size
 *      I. Loop over 0 to size, exclusive:
 *          a. Iterate over arr using a nested loop
 *              A. Read an int and assign it to the current cell of arr
 *      II. Call display passing in arr and size
 * 5. Define an array of arrays of ints arr with 10 rows and 10 columns, and
 * an int size
 * 6. Read an int and assign it to size
 * 7. Call read passing in arr and size
 */
#include <stdio.h>
#define MAX_MAT 10

void replace(int ary[MAX_MAT][MAX_MAT], int size, int min) {
    printf(
        "The matrix with diagonal elements replaced by minimum value is: \n");
    for (int i = 0; i < size; i++) {
        printf("\t");
        for (int j = 0; j < size; j++) {
            if (i == j) {
                printf("%d ", min);
            } else {
                printf("%d ", ary[i][j]);
            }
        }
        printf("\n");
    }
}

void display(int ary[MAX_MAT][MAX_MAT], int size) {
    int min = ary[0][0];
    printf("The matrix is: \n");
    for (int i = 0; i < size; i++) {
        printf("\t");
        for (int j = 0; j < size; j++) {
            printf("%d ", ary[i][j]);
            if (ary[i][j] < min) {
                min = ary[i][j];
            }
        }
        printf("\n");
    }

    replace(ary, size, min);
}


void read(int ary[MAX_MAT][MAX_MAT], int size) {
    printf("Enter %d integers: ", size * size);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) { 
            scanf("%d", &ary[i][j]);
        }
    }

    display(ary, size);
}

int main(void) {
    int ary[MAX_MAT][MAX_MAT], size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    read(ary, size);

    return 0;
}
