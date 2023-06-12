#include <iostream>
#include <vector>
#include <cmath>

using
    std::cout,
    std::vector;

/* Two crystal balls problem.
 * Given two crystal balls that will break if dropped from a high
 * distance, find the exact spot in which they will break in the
 * most optimized way.
 * Basically, we have an array full of `false`s and we need to
 * find that one `true` in the middle.
 * Both linear and binary searches suck for this because for it,
 * the running times of both algos are O(n).
 * In linear search, its obviously O(n), so how is it O(n) in
 * binary search?
 * Let's consider an array like this: [f, f, t, f, f]. 
 * The middle element is `true`, so binary searching it will
 * immediately give us where the 1st crystal ball breaks.
 * But we still need to look for the second one, so we have
 * to linearly go through (1/2) * n elements in the array,
 * where n is the number of elements. Drop the constants, and
 * what do we get? Voila, we get O(n)!
 * To fix this, we need to jump in such a way that's not a
 * portion of `n` i.e. 1/2 of n in binary search, but rather
 * the square root of `n`.
 * We jump the square root of `n` until the first ball breaks,
 * then if it breaks we walk back to the last point from where
 * we jumped previously and walk back to the front looking for
 * the other ball. This will create a worst case running time of:
 * O(sqrt(n) + sqrt(n)), which is equivalent to: 
 * O(sqrt(n)) */
bool two_crystal_balls(vector<bool> balls) {
    int jmp_amount = std::floor(std::sqrt(balls.size()));
    int i = jmp_amount;

    for (; i < balls.size(); i += jmp_amount) {
        if (balls[i]) break;
    }

    i -= jmp_amount;

    for (int j = 0; j <= jmp_amount && i < balls.size(); (j++, i++)) {
        if (balls[i]) return true;
    }

    return false; 
}

int main() {
    vector<bool> bawls = {false, true, false, false, false, true};

    cout << "Crystal bawls breakage found? " << two_crystal_balls(bawls) << "\n";

    return 0;
}
