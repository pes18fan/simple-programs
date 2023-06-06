// WAP to check odd or even number using conditional operator
#include <stdio.h>

int main(void) {
	int num;

	printf("Enter a number\n");
	scanf("%d", &num);

	// slick one-liner!
	printf("The number is %s", num % 2 == 0 ? "even" : "odd");

	return 0;
}
