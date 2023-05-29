// wap to show the fibonacci sequence via recursion
#include <stdio.h>

int fibo(int n) {
    if (n <= 1) return n;
    else return (fibo(n-1) + fibo(n-2));
}

int main(void) {
    int n;

    printf("Enter the number of terms required: ");
    scanf("%d", &n);

    printf("Fibonacci series upto %d:\n", n);

    for (int i = 1; i <= n; i++) {
	    printf("%d\t", fibo(i));
    }

    return 0;
}
