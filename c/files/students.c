#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    int roll;
} Student;

int main(void) {
    FILE* fp = fopen("STUDENT.DAT", "wb");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    Student s;

    for (int i = 0; i < 5; i++) {
        printf("Enter name, age and roll number of student %d: ", i + 1);
        scanf("%s %d %d", s.name, &s.age, &s.roll);
        fwrite(&s, sizeof(Student), 1, fp);
    }
    
    fclose(fp);

    return 0;
}
