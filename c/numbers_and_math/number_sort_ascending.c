// wap to arrange given numbers in ascending order
#include <stdio.h>

int main() {
    int nums[50];
    int n, temp;

    printf("Enter the total numbers to input: ");
    scanf("%d", &n);

    printf("Input the numbers: ");

    for (int i = 0; i < n; i++) {
	scanf("%d", &nums[i]);
    }

    printf("Arranged in ascending order, the numbers are given below:\n");

    for (int i = 0; i < n-1; i++) {
	for (int j = i+1; j < n; j++) {
	    if (nums[j] < nums[i]) {
	        temp = nums[i];
		nums[i] = nums[j];
		nums[j] = temp;
	    }
	}
    }

    for (int i = 0; i < n; i++) {
	printf("%d\n", nums[i]);
    }
}
