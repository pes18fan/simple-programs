// Modify f(x), x1 and x2 from false_position.h
#include "false_position.h"
#include <stdio.h>

double x_naught(double x1, double x2) {
    return ((x1 * f(x2)) - (x2 * f(x1))) / (f(x2) - f(x1));
}

int main() {
    printf("x1\t\tx2\t\tx0\t\tf(x1)\t\tf(x2)\t\tf(x0)");

    double x0 = 0;

    for (int i = 0; i < 10; i++) {
        printf("\n");

        x0 = x_naught(x1, x2);

        printf("%lf\t%lf\t%lf\t%lf\t%lf\t%lf", x1, x2, x0, f(x1), f(x2), f(x0));

        if (f(x0) < 0) {
            x1 = x0;
        } else if (f(x0) > 0) {
            x2 = x0;
        }
    }

    printf("\n\n");
    printf("Final approximation: %lf", x0);
}
