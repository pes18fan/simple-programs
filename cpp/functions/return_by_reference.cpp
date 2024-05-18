/* Write a function that passes two temperatures by reference and sets the
larger of the two numbers to 100 by using return by reference. */
#include <iostream>

int& larger(int& a, int& b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;

    std::cout << "Enter two temperatures\n";
    std::cin >> a >> b;

    larger(a, b) = 100;

    std::cout << "a = " << a << std::endl << "b = " << b;

    return 0;
}
