#include <stdio.h>

int main(void) {
	int a, b, prod;

	printf("Enter two numbers\n");
	scanf("%d %d", &a, &b);

	prod = a * b;
	printf("The product is %d", prod);

	return 0;
}
