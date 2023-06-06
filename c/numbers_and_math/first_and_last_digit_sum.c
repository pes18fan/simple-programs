#include <stdio.h>

int main(void) {
    int num, first = 0, last = 0, sum, rem;

    printf("Enter a 4 digit number:\n");
    scanf("%d", &num);

    if (num > 9999 || num < 1000) {
        perror("Not a 4 digit number!\n");
        return 1;
    }

    while (num != 0) {
        rem = num % 10;

        num /= 10;

        if (num >= 100 && num <= 1000) {
            last = rem;
        }

        if (num >= 0 && num <= 10) {
            first = rem;
        }
    }

    sum = first + last;
    printf("The sum is %d", sum);
    
    return 0;
}
