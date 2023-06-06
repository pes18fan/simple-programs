#include <stdio.h>

int main(void) {
    int a, max, min;
    char choice;

    printf("Enter a number\n");
    scanf("%d", &a);

    max = a;
    min = a;

    for (;;) {
        printf("Continue? (y/n)\n");
        getchar();
        scanf("%c", &choice);

        if (choice == 'n') break;

        printf("Enter another number\n");
        scanf("%d", &a);

        if (a > max) {
            max = a;
        } else if (a < min) {
            min = a;
        } else {
            continue;
        }
    }

    printf("Max is %d, min is %d", max, min);

    return 0;
}