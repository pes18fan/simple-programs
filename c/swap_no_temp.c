// wap to swap two variables without using a third one
#include <stdio.h>

int main() {
    int x = 10, y = 5;

    printf("Before swapping: %d %d\n", x, y);

    x += y;
    y = x - y;
    x -= y;

    printf("After swapping: %d %d\n", x, y);
}
