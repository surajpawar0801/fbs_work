#include <stdio.h>
#include <string.h>

struct Admin {
    int id;
    char name[20];
    int salary;
    int allowance;
};

int main() {
    struct Admin s1;

    s1.id = 109;
    strcpy(s1.name, "Suraj");
    s1.salary = 30000;
    s1.allowance = 5000;

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Salary: %d\n", s1.salary);
    printf("Allowance: %d\n", s1.allowance);

    struct Admin s2;

    printf("\nEnter ID: ");
    scanf("%d", &s2.id);

    printf("Enter Name: ");
    scanf("%19s", s2.name);

    printf("Enter Salary: ");
    scanf("%d", &s2.salary);

    printf("Enter Allowance: ");
    scanf("%d", &s2.allowance);

    printf("\nAdmin s2:\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Salary: %d\n", s2.salary);
    printf("Allowance: %d\n", s2.allowance);

    return 0;
}