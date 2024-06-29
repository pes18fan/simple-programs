/* WAP to find sum and average of two numbers. Use DMA. Also use static_cast
 * operator in your program. */
#include <iostream>
using namespace std;

int main() {
    int* a = new int;
    int* b = new int;

    cout << "Tell me two numbers.\n";
    cin >> *a >> *b;

    int sum = *a + *b;
    float avg = static_cast<float>(sum) / 2.0;

    cout << "Sum is " << sum << " and average is " << avg << "\n";

    delete a;
    delete b;

    return 0;
}
