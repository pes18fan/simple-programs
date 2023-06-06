#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main(void) {
    float r, area, circ;

    printf("Enter a radius\n");
    scanf("%f", &r);

    area = PI * pow(r, 2);
    circ = 2 * PI * r;

    printf("Area is %f\n", area);
    printf("Circumference is %f\n", circ);

    return 0;
}