// Write a program that reads name, roll_no, marks and address of 20 students using structure and display them.
#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    int marks;
    char address[30];
}std[20];

int main(void) {
    for (int i = 0; i < 20; i++) {
	printf("Enter name: ");
	scanf("%s", std[i].name);

	printf("Enter roll number: ");
	scanf("%d", &std[i].roll_no);

	printf("Enter marks: ");
	scanf("%d", &std[i].marks);

	printf("Enter address: ");
	scanf("%s", std[i].address);
    }

    for (int i = 0; i < 20; i++) {
	printf("%s\t%d\t%d\t%s\n", std[i].name, std[i].roll_no, std[i].marks, std[i].address);
    }

    return 0;
}
