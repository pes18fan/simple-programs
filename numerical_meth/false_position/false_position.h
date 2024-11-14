#ifndef false_position_h
#define false_position_h

#include <math.h>

static inline double f(double x) {
    // Define f(x) here.
    return (x * sin(x)) - 1;
}

// Define the two initial guesses here, such that f(x1) * f(x2) < 0.
// It is recommended to pick guesses such that f(x1) < 0 and f(x2) > 0.
static double x1 = 1;
static double x2 = 2;

#endif
