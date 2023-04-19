#include <stdio.h>

int main(void) {
    int year;

    puts("Enter a year");
    scanf("%d", &year);

    if (year % 400 == 0) {
        puts("It's a leap year");
    } else if (year % 100 == 0) {
        puts("It's not a leap year");
    } else if (year % 4 == 0) {
        puts("It's a leap year");
    } else {
        puts("It's not a leap year");
    }

    return 0;
}