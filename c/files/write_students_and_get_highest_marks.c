#include <stdio.h>
#include <stdint.h>

typedef struct {
    char name[50];
    char address[100];
    int roll;
    unsigned int marks;
} Student;

int main(void) {
    FILE* fp = fopen("students.bin", "wb+");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }
    Student s;
    Student max;
    max.marks = -1;

    for (int i = 0; i < 48; i++) {
        printf("Enter the name of student %d: ", i + 1);
        fgets(s.name, 50, stdin);
        printf("Enter the address of student %d: ", i + 1);
        fgets(s.address, 100, stdin);
        printf("Enter the roll number and marks of student %d: ", i + 1);
        scanf("%d %d", &s.roll, &s.marks);

        fwrite(&s, sizeof(Student), 1, fp);
    }

    rewind(fp);

    while (fread(&s, sizeof(Student), 1, fp) == 1) {
        if (s.marks > max.marks) max = s;
    }

    printf("Student with highest marks:\n");
    printf("Name: %s", s.name);
    printf("Address: %s", s.address);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %d\n", s.marks);

    fclose(fp);

    return 0;
}
