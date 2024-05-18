/* Write a program to display n characters by using default arguments for all
parameters. Assume that the function takes two arguments (one character to be
printed and other number of characters to be printed). */
#include <iostream>

void print_char(char c = ' ', int n = 1) {
    for (int i = 0; i < n; i++) {
        std::cout << c;
    }
}

int main() {
    print_char();
    return 0;
}
