// program to read a list of numbers using function read(), sort them with a
// function sort() and display the sorted list with the function display().
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

