// concatenate two strings via a concatenate() fn that doesn't use any string
// handling functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenate(char* a, char* b) {
    int len = 1;
    char* result = malloc(sizeof(char) * 100);

    for (int i = 0; a[i] != '\n'; i++) {
        result[i] = a[i];
        len++;
    }

    for (int i = 0; b[i] != '\n'; i++) {
        result[len - 1] = b[i];
        len++;
    }

    result[len] = '\0';

    return result;
}

int main(void) {
    char a[100];
    char b[100];

    printf("Enter a string\n");
    fgets(a, sizeof(a), stdin);

    printf("Enter another string\n");
    fgets(b, sizeof(b), stdin);

    char* concated = concatenate(a, b);

    printf("Concatenated:\n");
    printf("%s", concated);
    free(concated);

    return 0;
}
