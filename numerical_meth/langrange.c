/* Langrange interpolation. */
#include <stdio.h>

int main() {
    int n;

    printf("How many points do you have? ");
    scanf("%d", &n);

    double xp;

    printf("Provide your input: ");
    scanf("%lf", &xp);

    printf("Now, the points.\n");

    double x[n], y[n];
    for (int i = 0; i < n; i++) {
        printf("Provide the point (x%d, y%d): ", i, i);
        scanf("%lf %lf", &x[i], &y[i]);
    }

    double result = 0, numerator = 1, denominator = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                numerator *= xp - x[j];
                denominator *= x[i] - x[j];
            }
        }

        result += (numerator / denominator) * y[i];
        numerator = denominator = 1;
    }

    printf("The result is %.3lf", result);
}
