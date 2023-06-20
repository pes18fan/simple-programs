// read a bunch of words, arrange them in alphabetical order and print the
// ordered list using functions read(), arrange() and display().
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
