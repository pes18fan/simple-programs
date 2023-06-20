// find the biggest number among three using pointers
#include <stdio.h>

int main(void) {
    int a, b, c;
    int* ptr1 = &a;
    int* ptr2 = &b;
    int* ptr3 = &c;

    printf("Enter three numbers\n");
    scanf("%d%d%d", ptr1, ptr2, ptr3);

    if (*ptr1 > *ptr2 && *ptr1 > *ptr3) {
        printf("%d is the biggest number", *ptr1);
    } else if (*ptr2 > *ptr1 && *ptr2 > *ptr3) {
        printf("%d is the biggest number", *ptr2);
    } else {
        printf("%d is the biggest number", *ptr3);
    }
}
