#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char address[30];
    long int phone;
} Employee;

void read(Employee* emp) {
    printf("Name: ");
    fgets(emp->name, sizeof(emp->name), stdin);
    printf("Address: ");
    fgets(emp->address, sizeof(emp->address), stdin);
    printf("Phone: ");
    scanf("%ld", &emp->phone);
}

void sort(Employee* emps, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(emps[i].name, emps[j].name) > 0) {
                Employee temp = emps[i];
                emps[i] = emps[j];
                emps[j] = temp;
            }
        }
    }
}

void display(Employee* emps, int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s", emps[i].name);
        printf("Address: %s", emps[i].address);
        printf("Phone: %ld\n", emps[i].phone);
    }
}

int main(void) {
    Employee emps[10];

    printf("Enter employee details:");
    for (int i = 0; i < 10; i++) {
        read(&emps[i]);
    }

    sort(emps, 10);

    display(emps, 10);
}
