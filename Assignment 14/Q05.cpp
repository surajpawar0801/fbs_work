#include <stdio.h>
#include <string.h>

struct SalesManager {
    int id;
    char name[20];
    int salary;
    int incentive;
    int target;
};

int main() {
    struct SalesManager s1;

    s1.id = 109;
    strcpy(s1.name, "Suraj");
    s1.salary = 30000;
    s1.incentive = 5000;
    s1.target = 100000;

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Salary: %d\n", s1.salary);
    printf("Incentive: %d\n", s1.incentive);
    printf("Target: %d\n", s1.target);

    struct SalesManager s2;

    printf("\nEnter ID: ");
    scanf("%d", &s2.id);

    printf("Enter Name: ");
    scanf("%19s", s2.name);

    printf("Enter Salary: ");
    scanf("%d", &s2.salary);

    printf("Enter Incentive: ");
    scanf("%d", &s2.incentive);

    printf("Enter Target: ");
    scanf("%d", &s2.target);

    printf("\nSalesManager s2:\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Salary: %d\n", s2.salary);
    printf("Incentive: %d\n", s2.incentive);
    printf("Target: %d\n", s2.target);

    return 0;
}