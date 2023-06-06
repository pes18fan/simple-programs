// check if a number is prime using a fn
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main(void) {
    int n;
    bool prime;

    printf("Enter a number\n");
    scanf("%d", &n);

    printf("The number is %s",
            is_prime(n) ? "prime" : "not prime" );
    
    return 0;
}
