#include <stdio.h>

int main(void) {
    int a, b;
    char choice;

    do {
        printf("Enter two numbers\n");
        scanf("%d%d", &a, &b);

        printf("The sum is %d\n", a + b);

        printf("Continue? (y/n)\n");
        getchar();
        scanf("%c", &choice);

        if (choice == 'n') break;
    } while (1);
}
