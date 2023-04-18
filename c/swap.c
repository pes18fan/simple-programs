// WAP to swap two variables using a third variable
#include <stdio.h>

int main(void) {
	int a = 5, b = 10, temp;

	printf("Before swap: a = %d, b = %d", a, b);

	temp = a;
	a = b;
	b = temp;

	printf("After swap: a = %d, b = %d", a, b);

	return 0;
}
