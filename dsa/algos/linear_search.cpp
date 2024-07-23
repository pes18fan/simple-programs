#include <iostream>
#include <vector>

using std::cout, std::vector;

// linear search is O(n) in time complexity
bool linear_search(vector<int> haystack, int needle) {
    for (int item : haystack) {
        if (item == needle)
            return true;
    }

    return false;
}

int main() {
    vector<int> vek = {1, 2, 3, 4, 5};
    int ndle = 4;

    cout << "Found " << ndle << "? " << linear_search(vek, ndle);

    return 0;
}
