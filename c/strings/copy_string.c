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
