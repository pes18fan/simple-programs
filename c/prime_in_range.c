// program to find prime numbers in a range
#include <stdio.h>

int main(void) {
    int range;

    printf("Enter a range\n");
    scanf("%d", &range);

    for (int i = 2; i <= range; i++) {
        int is_prime = 1;
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) printf("%d is prime.\n", i);
    }

    return 0;
}