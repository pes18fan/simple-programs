#include <math.h>
#include <stdio.h>
#define E 0.001

double f(double x) { return x * x - 4 * x - 10; }

double g(double x) { return (4 * sin(x)) - exp(x); }

double approximator(double (*f)(double x)) {
    double x1, x2, f1, f2;
    double x0 = -1;
    double f0 = -1;

    for (;;) {
        printf("Enter x1 and x2: \n");
        scanf("%lf %lf", &x1, &x2);

        f1 = f(x1);
        f2 = f(x2);

        if (f1 * f2 >= 0) {
            printf("Product of f(x1) and f(x2) must be negative but isn't."
                   "Try other values.\n");
        } else {
            break;
        }
    }

    printf("\n\n");
    printf("S.N\tx1\t\tx2\t\tx0\t\tf1\t\tf2\t\tf0\n");

    for (int count = 1;; count++) {
        x0 = (x1 * f2 - x2 * f1) / (f2 - f1);
        f0 = f(x0);

        f1 = f(x1);
        f2 = f(x2);

        printf("%d\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", count, x1, x2, x0, f1, f2,
               f0);

        if (f0 == 0) {
            printf("\n");
            break;
        } else if (f1 * f0 > 0) {
            x1 = x0;
            f1 = f0;
        } else {
            x2 = x0;
            f2 = f0;
        }

        if (fabs(f0) <= E) {
            printf("\n");
            break;
        }
    }

    return x0;
}

int main() {
    printf("For f(x), approximation is %lf\n\n", approximator(f));
    printf("For g(x), approximation is %lf", approximator(g));
}
