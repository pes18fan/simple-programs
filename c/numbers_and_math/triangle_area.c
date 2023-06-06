#include <stdio.h>

int main(void) {
    float height, base, area;

    printf("Enter base and height of triangle\n");
    scanf("%f %f", &base, &height);

    area = ( 1.0 / 2.0 ) * base * height;

    printf("Area is %.3f", area);

    return 0;
}