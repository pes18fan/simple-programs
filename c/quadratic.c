// WAP to display roots of a quadratic equation
#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c, discriminant;

    puts("Enter a, b and c in ax^2 + bx + c = 0");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Invalid quadratic equation!");
        return 1;
    }

    discriminant = pow(b, 2) - (4 * a * c);

    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("First root: %.3f, Second root: %.3f", root1, root2);
    } else if (discriminant == 0) {
        float root = (-b) / (2 * a);

        printf("Common root: %.3f", root);
    } else {
        float root_real = (-b) / (2 * a);
        float root_imag = (sqrt(-discriminant)) / (2 * a);

        printf("First root: %.3f + %.3fi, Second root: %.3f - %.3fi", root_real, root_imag, root_real, root_imag);
    }

    return 0;
}