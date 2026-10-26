#include <stdio.h>
#include <string.h>
struct employee {
    int id;
    char name[20];
    int salary;
};
int main() {
    struct employee s1;

    s1.id = 109;
    strcpy(s1.name, "Suraj");
    s1.salary = 30000;

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Salary: %d\n", s1.salary);

    struct employee s2;

    printf("\nEnter ID: ");
    scanf("%d", &s2.id);

    printf("Enter Name: ");
    scanf("%19s", s2.name);

    printf("Enter Salary: ");
    scanf("%d", &s2.salary);

    printf("\nEmployee s2:\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Salary: %d\n", s2.salary);

    return 0;
}
