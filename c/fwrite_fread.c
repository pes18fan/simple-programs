// wap to write and read a record to/from a file using fwrite() and fread()
#include <stdio.h>

FILE *fp;

struct Info {
    int roll;
    char name[30];
    int class;
}inf;

int main() {
    fp = fopen("student.dat", "w");

    printf("Enter the roll number: ");
    scanf("%d", &inf.roll);
    printf("Enter name: ");
    scanf("%s", inf.name);
    printf("Enter class: ");
    scanf("%d", &inf.class);

    fwrite(&inf, sizeof(inf), 1, fp);
    // syntax: fwrite(struct_address, sizeof_struct, no_of_record, file_pointer)
    
    fclose(fp);

    fp = fopen("student.dat", "r");

    printf("\nDetails of student are: \n\n");

    fread(&inf, sizeof(inf), 1, fp);

    printf("Name: %s\n", inf.name);
    printf("Roll number: %d\n", inf.roll);
    printf("Class: %d\n", inf.class);

    fclose(fp);

    return 0;
}
