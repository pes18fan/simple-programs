// a program that reads a sentence and replaces the word "the" with "***".
// 1. Start
// 2. Declare variable str[100]
// 3. Read str
// 4. Loop from 0 while str[i] != '\n'
//   i. If the next 3 characters are 't', 'h', 'e' and the next is whitespace, 
//      replace them with '*'
// 5. Print str
// 6. Stop
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_ascii_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

int main(void) {
    char str[100];

    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\n'; i++) {
        if (str[i] == 't' &&
                str[i + 1] == 'h' &&
                str[i + 2] == 'e' &&
                is_ascii_whitespace(str[i + 3])) {
            str[i] = '*';
            str[i + 1] = '*';
            str[i + 2] = '*';
        }
    }

    printf("%s", str);
}
