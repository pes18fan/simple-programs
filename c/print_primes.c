// wap to find the total prime numbers between two given numbers and print them
#include <stdio.h>

int main() {
    int n1, n2, totalc = 0, i, j;

    printf("Enter the numbers between which you wish to check for primes: \n");
    scanf("%d %d", &n1, &n2);

    for (i = n1; i < n2; i++) {
	int tempc = 0;

	for (j = 1; j <= i; j++) {
	    if (i % j == 0) tempc++;
	}

	if (tempc == 2) {
	    printf("%d is prime.\n", i);
	    totalc++;
	}
    }

    printf("Total prime numbers are %d\n", totalc);
}
