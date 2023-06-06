#include <stdio.h>

int main(void) {
    int x, y, x_original;
    x_original = 6;
    y = 3;

    printf("x\t|\ty\t|\texprs\t\t|\tresults\n");

    x = y + 3;
    printf("%d\t|\t%d\t|\tx = y + 3\t|\t%d\n", x_original, y, y);

    x = y - 2;
    printf("%d\t|\t%d\t|\tx = y - 2\t|\t%d\n", x_original, y, y);

    x = y * 5;
    printf("%d\t|\t%d\t|\tx = y * 5\t|\t%d\n", x_original, y, y);

    x = 6 / y;
    printf("%d\t|\t%d\t|\tx = x / y\t|\t%d\n", x_original, y, y);

    return 0;
}
