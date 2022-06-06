// WAP to enter roll_no, name, age of 20 students and count students with age > 20 and <25.
#include <stdio.h>

struct Student {
    int roll_no;
    char name[30];
    int age;
}stud[20];

int main(void) {
    int count = 0;

    for (int i = 0; i < 20; i++) {
	printf("Enter roll number: \n");
	scanf("%d", &stud[i].roll_no);

	printf("Enter name: \n");
	scanf("%s", stud[i].name);

	printf("Enter age: \n");
	scanf("%d", &stud[i].age);

	if (stud[i].age > 20 && stud[i].age < 25)
	    count++;
    }

    printf("There are %d student between the age of 25 and 20.\n", count);
}
