#include <iostream>

/* Cube */
float volume(float l) { return l * l; }

/* Cylinder */
float volume(float h, float r) { return 3.1415 * r * r * h; }

/* Rectangular Box */
float volume(float l, float b, float h) { return l * b * h; }

int main() {
    std::cout << "Volume of cube with length 5: " << volume(5) << "\n";
    std::cout << "Volume of cylinder with height and radius 5: " << volume(5, 5)
              << "\n";
    std::cout
        << "Volume of rectangular box with length 5, breadth 10 and height 5: "
        << volume(5, 10, 5) << "\n";

    return 0;
}
