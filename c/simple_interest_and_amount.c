// wap to find the simple interest and amount
#include <stdio.h>

int main() {
    float principal, time, rate, interest, amount;

    printf("Enter the principal, rate and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    interest = (principal * time * rate) / 100;
    amount = principal + interest;

    printf("The interest is %f and the amount is %f\n", interest, amount);
}
