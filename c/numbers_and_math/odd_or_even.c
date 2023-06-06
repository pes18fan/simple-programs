// WAP to check odd or even number using the modulo operator
#include <stdio.h>

int main(void) {
	int num;

	printf("Enter a number\n");
	scanf("%d", &num);

	if (num % 2 == 0)
		printf("The number is even");
	else
		printf("The number is odd");

	return 0;
}
