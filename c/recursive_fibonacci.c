// wap to show the fibonacci sequence via recursion
#include <stdio.h>

int fibo(int);

int main() {
    int n;

    printf("Enter the number of terms required: ");
    scanf("%d", &n);

    printf("Fibonacci series upto %d:\n", n);

    for (int i = 1; i <= n; i++) {
	printf("%d\n", fibo(i));
    }

    return 0;
}

int fibo(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else return (fibo(n-1) + fibo(n-2));
}
