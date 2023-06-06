// program to read a square matrix and print the same matrix by replacing its
// diagonal elements by minimum value among the elements of original matrix
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
    int ary[10][10], size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    read(ary, size);

    return 0;
}
