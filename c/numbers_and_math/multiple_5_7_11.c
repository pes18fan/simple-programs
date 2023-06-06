#include <stdio.h>

int main(void) {
    int num;

    printf("Enter a number\n");
    scanf("%d", &num);

    if (num % 5 == 0) {
        if (num % 7 == 0) {
            if (num % 11 != 0) {
                printf("The number is a multiple of 5 and 7 but not 11.");
            } else {
                printf("The number is divisible by 5, 7 and 11.");
            }
        }
    } else {
        printf("The number is not a multiple of 5.");
    }

    return 0;
}