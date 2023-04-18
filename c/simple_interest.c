#include <stdio.h>

int main(void) {
	float p, t, r, si;

	printf("Enter principal, time and rate\n");
	scanf("%f %f %f", &p, &t, &r);

	si = ( p * t * r ) / 100;

	printf("The interest is %f", si);

	return 0;
}
