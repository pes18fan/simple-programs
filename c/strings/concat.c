// concatenate two strings via a concatenate() fn that doesn't use any string
// handling functions
// 1. Start
// 2. Declare fn concatenate(a, b)
//   i. Declare variables len = 1, result[100]
//   ii. Loop from 0 while a[i] is not a newline
//     a. Assign a[i] to result[i]
//     b. Increment len
//   iii. Loop from 0 while b[i] is not a newline
//     a. Assign b[i] to result[len - 1]
//     b. Increment len
//   iv. Assign '\0' to result[len]
//   v. Return result
// 2. Declare variables a[100], b[100], len = 1, result[100]
// 3. Read a and b
// 4. Call concatenate(a, b) and assign it to concated
// 5. Print concated
// 6. Stop
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
