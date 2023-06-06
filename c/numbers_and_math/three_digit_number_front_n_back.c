// WAP to prompt the user to input a three-digit number and print these values in forward and reverse order
#include <stdio.h>

int main(void) {
	int num, rev = 0, rem;

	printf("Enter a three digit number\n");
	scanf("%d", &num);

	while (num != 0) {
		rem = num % 10;
		rev = ( rev * 10 ) + rem;
		num /= 10;
	}

	printf("Reverse is %d", rev);
	
	return 0;
}
