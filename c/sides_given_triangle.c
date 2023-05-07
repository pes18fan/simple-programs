#include <stdio.h>
#include <math.h>

int main(void) {
    float x, y, z, s, area;

    printf("Enter the lengths of the sides of the triangle\n");
    scanf("%f%f%f", &x, &y, &z);

    s = ( x + y + z ) / 2.0;
    area = sqrt(s * ( s - x ) * ( s - y ) * ( s - z ) );

    printf("The area of the triangle is %f", area);

    return 0;    
}