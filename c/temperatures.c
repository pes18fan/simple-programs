// WAP to convert temperature to farenheit from celsius
#include <stdio.h>

int main(void) {
	float farenheit, celsius;

	printf("Enter temperature in Celsius\n");
	scanf("%f", &celsius);

	farenheit = ( celsius * ( 9.0 / 5.0 ) ) + 32.0;

	printf("It is %.2f in Farenheit", farenheit);

	return 0;
}
