#include <math.h>
#include <stdio.h>
#define E 0.001

double f(double x) { return x * x - 4 * x - 10; }

double g(double x) { return 4 * sin(x) - exp(x); }

double approximator(double (*f)(double x)) {
    double x0, x1, x2, f0, f1;

    /* Unlike bisection and false position methods, this method doesn't require
     * x0 and x1 to have opposite signs.
     */
    printf("Tell me two initial values\n");
    scanf("%lf %lf", &x0, &x1);

    printf("\n");
    printf("S.N\tx1\t\tx2\t\tx0\t\tf1\t\tf2\t\tf0\n");

    for (int count = 1;; count++) {
        f0 = f(x0);
        f1 = f(x1);
        x2 =
            x1 - f(x1) * ((x1 - x0) / (f(x1) - f(x0))); // Secant method formula

        printf("%d\t%lf\t%lf\t%lf\t%lf\t%lf\t%lf\n", count, x0, x1, x2, f0, f1,
               f(x2));

        x0 = x1;
        x1 = x2;

        if (fabs(x1 - x0) <= E) {
            printf("\n");
            break;
        }
    }

    return x2;
}

int main() {
    printf("The approximation for 1a is %lf\n\n", approximator(f));
    printf("The approximation for 1b is %lf", approximator(g));
}
