#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main(void) {
    float x, y, r, theta;

    printf("Enter the Cartesian coordinates\n");
    scanf("%f %f", &x, &y);

    r = sqrt(pow(x, 2) + pow(y, 2));
    theta = (atanf(y / x)) * (180 / PI);

    printf("Polar coordinates: (%.3f, %.3f)", r, theta);

    return 0;
}
