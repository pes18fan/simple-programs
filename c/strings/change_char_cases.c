// WAP to change the casing of a letter (uppercase to lowercase and vice versa)
#include <stdio.h>

int main(void) {
    char alph;

    printf("Enter a letter\n");
    scanf("%c", &alph);
    
    if (alph >= 65 && alph <= 91) {
        alph += 32;
    } else if (alph >= 97 && alph <= 122) {
        alph -= 32;
    } else {
        puts("Invalid character.");
        return 1;
    }

    printf("Upper/lowercase of it is %c", alph);

    return 0;
}
