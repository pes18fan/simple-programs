#include <stdio.h>

typedef struct {
    char name[100];
    char address[100];
    long int phone;
    int no_of_employees;
} Company;

int main(void) {
    Company company;

    printf("Enter company name\n");
    fgets(company.name, sizeof(company.name), stdin);

    printf("Enter company address\n");
    fgets(company.address, sizeof(company.address), stdin);

    printf("Enter company phone number\n");
    scanf("%ld", &company.phone);

    printf("Enter number of employees\n");
    scanf("%d", &company.no_of_employees);

    printf("Company name: %s", company.name);
    printf("Company address: %s", company.address);
    printf("Company phone number: %ld\n", company.phone);
    printf("Number of employees: %d\n", company.no_of_employees);

    return 0;
}
