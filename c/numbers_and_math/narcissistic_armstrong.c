// WAP to find if an entered number is an Armstrong (narcissistic) number or not
#include <stdio.h>
#include <math.h>

int main(void) {
	int num, num_used, rem, dig_num, arm_val;
	int digits[10];

	printf("Enter a number\n");
	scanf("%d", &num);
	num_used = num;

	for (dig_num = 0; num_used != 0; dig_num++) {
		rem = num_used % 10;
		digits[dig_num] = rem;
		num_used /= 10;
	}

	for (int i = 0; i < dig_num; i++) {
		arm_val += pow(digits[i], dig_num);
	}

	printf("The number is %s", num == arm_val ? "narcissistic" : "not narcissistic");

	return 0;
}
