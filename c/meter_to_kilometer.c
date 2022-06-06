// wap to convert meters to kilometers
#include <stdio.h>

int main() {
    float m, km;

    printf("Enter distance in meters: ");
    scanf("%f", &m);

    km = m / 1000;

    printf("In kilometers, it is %f\n", km);
}
