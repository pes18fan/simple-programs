// wap to create a sequence resembling 1 2 3 4 5 4 3 2 1
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
	printf("%d\t", i);
    }

    for (int i = n-1; i > 0; i--) {
	printf("%d\t", i);
    }
}
