// WAP to convert temperature to celsius from farenheit
#include <stdio.h>

int main(void) {
	float farenheit, celsius;

	printf("Enter temperature in Farenheit\n");
	scanf("%f", &farenheit);

	celsius = ( 5.f / 9.f ) * ( farenheit - 32 );

	printf("It is %f in Celsius", celsius);

	return 0;
}
