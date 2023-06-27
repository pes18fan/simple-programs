// find the biggest number among three using pointers
// 1. Start
// 2. Declare three integer variables a, b, c and three integer pointers ptr1,
//   ptr2, ptr3 pointing to them
// 4. Declare int pointer result
// 4. Read ptr1, ptr2, ptr3
// 5. If *ptr1 is greater than *ptr2 and *ptr1 is greater than *ptr3:
//    5.1 Assign ptr1 to result and goto step 8
// 6. Else if *ptr2 is greater than *ptr1 and *ptr2 is greater than *ptr3 :
//   6.1 Assign ptr2 to result and goto step 8
// 7. Else assign ptr3 to result
// 8. Print *result
// 9. Stop
#include <stdio.h>

int main(void) {
    int a, b, c;
    int *ptr1 = &a, *ptr2 = &b, *ptr3 = &c;
    int* result;

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
