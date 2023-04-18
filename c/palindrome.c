// WAP to find if given number is palindrome or not
#include <stdio.h>

int main(void) {
	int num, num_used, rev = 0, rem;

	printf("Enter a number\n");
	scanf("%d", &num);
	num_used = num;

	while (num_used != 0) {
		rem = num_used % 10;
		rev = ( rev * 10 ) + rem;
		num_used /= 10;
	}

	printf("The number is %s", rev == num ? "a palindrome" : "not a palindrome");

	return 0;
}
