// wap to convert seconds to minutes
#include <stdio.h>

int main() {
    float sec, min;

    printf("Enter the number of seconds: ");
    scanf("%f", &sec);

    min = sec / 60;

    printf("In minutes it is %f\n", min);
}
