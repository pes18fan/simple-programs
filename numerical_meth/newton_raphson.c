#include <math.h>
#include <stdio.h>
#define E 0.001

double f(double x) { return x * x - 4 * x - 10; }

/* The derivative of f(x), necessary for this method. */
double f_deriv(double x) { return 2 * x - 4; }

double g(double x) { return x * tan(x) - 1; }

double sec(double x) { return 1 / (tan(x)); }

double g_deriv(double x) { return x * pow(sec(x), 2) + tan(x); }

double approximator(double (*f)(double x), double (*f_deriv)(double x)) {
    double x0, x1, f0, f0_deriv;

    printf("Pick an initial approximation\n");
    scanf("%lf", &x0);

    printf("\n");
    printf("S.N\tx0\t\tx1\n");

    for (int count = 1;; count++) {
        f0 = f(x0);
        f0_deriv = f_deriv(x0);

        if (f0_deriv == 0) {
            printf("f0_deriv was found to be zero. Method failed.\n");
            return -1;
        }

        x1 = x0 - (f0 / f0_deriv); // The Newton-Raphson formula

        printf("%d\t%lf\t%lf\n", count, x0, x1);

        /* The iterations can end once the difference between the last two
         * approximations is small enough.
         */
        if (fabs(x1 - x0) <= E) {
            printf("\n");
            break;
        }

        x0 = x1;
    }

    return x1;
}

int main() {
    printf("Approximation of the root of 1a is %lf\n",
           approximator(f, f_deriv));
    printf("Approximation of the root of 1b is %lf", approximator(g, g_deriv));
}
