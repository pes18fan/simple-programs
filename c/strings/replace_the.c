// a program that reads a sentence and replaces the word "the" with "***".
#include <stdio.h>

int main(void) {
    char str[100];
    char temp[100];
    int len = 0;

    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\n'; i++) {
        temp[i] = str[i];
        len++;
    }

    temp[len] = '\0';

    for (int i = 0; temp[i] != '\0'; i++) {
        if (temp[i] == 't' && temp[i + 1] == 'h' && temp[i + 2] == 'e') {
            temp[i] = '*';
            temp[i + 1] = '*';
            temp[i + 2] = '*';
        }
    }

    printf("%s", temp);
}
