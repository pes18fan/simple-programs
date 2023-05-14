#include <stdio.h>

int main(void) {
    int n, sum = 0;

    printf("Enter a positive integer\n");
    scanf("%d", &n);

    if (n <= 0) {
        perror("Please enter a positive number\n");
        return 1;
    }

    for (int i = n; i >= 1; i--) {
        sum += i;
    }

    printf("The sum from 1 to %d is %d", n, sum);

    return 0;
}
