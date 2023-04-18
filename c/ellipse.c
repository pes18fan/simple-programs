#include <stdio.h>
#define PI 3.1415

int main(void) {
	float maj_axis, min_axis, area;

	printf("Enter the major and minor axes\n");
	scanf("%f %f", &maj_axis, &min_axis);

	area = PI * maj_axis * min_axis;

	printf("The area is %f", area);

	return 0;
}
