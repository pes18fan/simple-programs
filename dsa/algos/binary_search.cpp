/* Binary search.
 * Keep halving the array and looking in those halves until the
 * element is found. */
#include <cmath>
#include <iostream>
#include <vector>

using std::cout, std::vector;

/* `haystack` is the array, `lo` is where to start searching, and `hi`
 * is where to stop searching, `needle` is what we're looking for
 * NOTE: lo is inclusive and hi is exclusive, so [lo, hi).
 * NOTE: This function assumes that the array is sorted. */
bool binary_search(vector<int> haystack, int lo, int hi, int needle) {
    do {
        // find the middle index
        int mid = std::floor(lo + (hi - lo) / 2);
        // get the value at `mid`
        int val = haystack[mid];

        // change `hi` or `lo` to `mid` to halve the array till
        // we eventually find the element
        // note that `lo` changes to `mid + 1` as it is inclusive
        // but `hi` is inclusive
        if (val == needle) {
            return true;
        } else if (val > needle) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    } while (lo < hi);

    return false;
}

int main() {
    vector<int> hstk = {1, 2, 4, 8, 69, 420, 4737};

    bool success = binary_search(hstk, 0, hstk.size(), 69);

    cout << "found the element: " << success << "\n";

    return 0;
}
