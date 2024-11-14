#ifndef bisection_h
#define bisection_h

#include <math.h>

static inline double f(double x) {
    // Define f(x) here.
    return pow(x, 3) - 4 * x - 9;
}

// Define the two initial guesses here, such that f(x1) * f(x2) < 0.
// It is recommended to pick guesses such that f(x1) < 0 and f(x2) > 0.
static double x1 = 2;
static double x2 = 3;

#endif
