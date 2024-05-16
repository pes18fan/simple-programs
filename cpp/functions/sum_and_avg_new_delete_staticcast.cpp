#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers?\n";
    cin >> n;

    int* nums = new int[n];

    cout << "Tell me " << n << " numbers.\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int sum = 0;
    float avg;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    avg = static_cast<float>(sum) / static_cast<float>(n);

    cout << "Sum is " << sum << " and average is " << avg << "\n";

    delete[] nums;
    return 0;
}
