#include <stdio.h>

int main() {
	float a, b, c, d, e, avg;

	printf("Enter average mark of C of 5 students\n");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

	avg = ( a + b + c + d + e ) / 5;

	printf("\nAverage is %f", avg);

	return 0;
}
