#include <math.h>
#include <stdio.h>
#define E 0.001

double f(double x) { return x * x - 4 * x - 10; }

double approximator(double (*f)(double x)) {
    double x0, x1, x2, f0, f1;

    printf("Tell me two initial values\n");
    scanf("%lf %lf", &x0, &x1);

    printf("\n");
    printf("S.N\tx1\t\tx2\t\tx0\t\tf1\t\tf2\t\tf0\n");

    for (int count = 1;; count++) {
        f0 = f(x0);
        f1 = f(x1);
        x2 = x1 - f(x1) * ((x1 - x0) / (f(x1) - f(x0)));

        printf("%d\t%lf\t%lf\t%lf\t%lf\t%lf\n", count, x0, x1, x2, f0, f1);

        x0 = x1;
        x1 = x2;

        if (fabs(x1 - x0) <= E) {
            printf("\n");
            break;
        }
    }

    return x0;
}

int main() { printf("The approximation is %lf", approximator(f)); }
