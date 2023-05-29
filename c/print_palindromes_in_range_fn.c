// create a fn to print all the palindrome numbers in a user-defined range
#include <stdio.h>

void print_palindromes(int lo, int hi) {
    for (int i = lo; i < hi; i++) {
        int n = i;
        int rev = 0;

        while (n > 0) {
            int rem = n % 10;
            rev = ( rev * 10 ) + rem;
            n /= 10;
        }

        if (rev == i) {
            printf("%d\n", i);
        }
    }
}

int main(void) {
    int lo, hi;

    printf("Enter the constraints of the range (low and high)\n");
    scanf("%d%d", &lo, &hi);

    print_palindromes(lo, hi);

    return 0;
}
