// wap to find the total prime numbers between two given numbers and print them
#include <stdio.h>

int main() {
    int n1, n2, total_primes = 0, i, j;

    printf("Enter the numbers between which you wish to check for primes: \n");
    scanf("%d %d", &n1, &n2);

    for (i = n1; i < n2; i++) {
	int factors = 0;

	for (j = 1; j <= i/2; j++) {
	    if (i % j == 0) factors++;
	}

	if (factors == 1) { //always 1 is a factor for primes less than or equal to n/2
	    printf("%d is prime.\n", i);
	    total_primes++;
	}
    }

    printf("Total prime numbers are %d\n", total_primes);
}
