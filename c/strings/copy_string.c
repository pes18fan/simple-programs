// wap to copy a string without strcpy()
// 1. Start
// 2. Declare variables a[100], b[100], len = 0
// 3. Read a
// 4. Loop from 0 while a[i] is not a newline
//  i. Assign a[i] to b[i]
//  ii. Increment len
// 5. Assign '\0' to b[len]
// 6. Print b
// 7. Stop
#include <stdio.h>

int main(void) {
    char a[100];
    char b[100];
    int len = 0;

    printf("Enter a string\n");
    fgets(a, sizeof(a), stdin);

    for (int i = 0; a[i] != '\n'; i++) {
        b[i] = a[i];
        len++;
    }

    b[len] = '\0';
    printf("%s", b);
}
