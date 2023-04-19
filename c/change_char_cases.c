// WAP to change the casing of a letter (uppercase to lowercase and vice versa)
#include <stdio.h>
#include <ctype.h>

int main(void) {
    char alph;

    puts("Enter a letter");
    scanf("%c", &alph);

    if (islower(alph)) {
        printf("%c", toupper(alph));
    } else if (isupper(alph)) {
        printf("%c", tolower(alph));
    } else {
        puts("Invalid letter");
    }

    return 0;
}