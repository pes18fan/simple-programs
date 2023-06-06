// wap to find the area of a circle using its radius
#include <stdio.h>
#define PI 3.1415

int main() {
    float rad, area;

    printf("Enter the radius of circle: ");
    scanf("%f", &rad);

    area = PI * (rad * rad);

    printf("Area is %f\n", area);
}
