#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char address[30];
    long int phone;
} Employee;

int main(void) {
    Employee emps[10];

    printf("Enter employee details:");
    for (int i = 0; i < 10; i++) {
        printf("Name: ");
        fgets(emps[i].name, sizeof(emps[i].name), stdin);
        printf("Address: ");
        fgets(emps[i].address, sizeof(emps[i].address), stdin);
        printf("Phone: ");
        scanf("%ld", &emps[i].phone);
    }

    // sort emps[]
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (strcmp(emps[i].name, emps[j].name) > 0) {
                Employee temp = emps[i];
                emps[i] = emps[j];
                emps[j] = temp;
            }
        }
    }

    // display each of emps[]
    for (int i = 0; i < 10; i++) {
        printf("Name: %s", emps[i].name);
        printf("Address: %s", emps[i].address);
        printf("Phone: %ld\n", emps[i].phone);
    }
}
