// WAP to change the casing of a letter (uppercase to lowercase and vice versa)
// 1. Start
// 2. Declare char alph
// 3. Read alph
// 4. If alph is between 65 and 91, inclusive, increment alph by 32
//    Else if alph is between 97 and 122, inclusive, decrement alph by 32
//    Else print "Invalid character." and return 1
// 5. Print alph
// 6. Stop
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
