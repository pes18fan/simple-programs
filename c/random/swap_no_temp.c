// WAP to swap two variables without a third variable
#include <stdio.h>

int main(void) {
	int a = 5, b = 10, temp;

	printf("Before swap: a = %d, b = %d", a, b);

	// The trick here is to use the bitwise XOR operator
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("After swap: a = %d, b = %d", a, b);

	return 0;
}
