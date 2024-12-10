#include <math.h>
#include <stdio.h>
#define E 0.001

double f(double x) { return x * x - x - 2; }

double phi(double x) { return 2 / (x - 1); }

int main() {
    double x1, x0;

    printf("Provide an initial approximation\n");
    scanf("%lf", &x0);

    printf("\n");

    printf("S.N\tx0\tx1\n");

    for (int count = 1;; count++) {
        x1 = phi(x0);

        printf("%d\t%lf\t%lf\n", count, x0, x1);

        if (fabs(x1 - x0) <= E) {
            printf("\n");
            break;
        }

        x0 = x1;
    }

    printf("Approximation is %lf", x1);
}
