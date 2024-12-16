#include <math.h>
#include <stdio.h>
#define E 0.001

double f(double x) { return x * x - x - 2; }

/* phi is recieved by simplifying f(x) = 0 to create x = phi(x). There are
 * often multiple possible phi functions, and the condition for one to be
 * valid for this method is: |phi(x)| < 1 for all x in the neighborhood of the
 * root of f(x).
 *
 * After phi(x) is found, finding the root is exceedingly simple; just iterate
 * with it again and again to improve the approximation on each one of them.
 */
double phi(double x) { return 2 / (x - 1); }

double approximator(double (*f)(double x), double (*phi)(double x)) {
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

    return x1;
}

int main() { printf("Approximation is %lf", approximator(f, phi)); }
