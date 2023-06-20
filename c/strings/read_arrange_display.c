// read a bunch of words, arrange them in alphabetical order and print the
// ordered list using functions read(), arrange() and display().
// 1. Start
// 2. Declare fn read(str, n)
//  i. Read n strings into str
// 3. Declare fn arrange(str, n)
//  i. Declare temp[20]
//  ii. Loop from 0 to n-1, exclusive
//    a. Loop from i+1 to n, exclusive
//      i. if strcmp(str[i], str[j]) > 0, swap them via strcpy
// 4. Declare fn display(str, n)
//  i. Print sorted strings
// 5. Declare str[20][30], n
// 6. Read n
// 7. Call read(str, n)
// 8. Call arrange(str, n)
// 9. Call display(str, n)
// 10. Stop
#include <stdio.h>
#include <string.h>

void read(char str[20][30], int n) {
    printf("Enter strings\n");

    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
}

void arrange(char str[20][30], int n) {
    char temp[20];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
}

void display(char str[20][30], int n) {
    printf("Sorted strings are: \n");

    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
}

int main(void) {
    char str[20][30];
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    read(str, n);
    arrange(str, n);
    display(str, n);
}
