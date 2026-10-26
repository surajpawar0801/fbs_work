#include <stdio.h>

struct Date {
    int date;
    int month;
    int year;
};

int main() {
    struct Date s1;

    s1.date = 26;
    s1.month = 10;
    s1.year = 2026;

    printf("Date: %d\n", s1.date);
    printf("Month: %d\n", s1.month);
    printf("Year: %d\n", s1.year);

    struct Date s2;

    printf("\nEnter Date: ");
    scanf("%d", &s2.date);

    printf("Enter Month: ");
    scanf("%d", &s2.month);

    printf("Enter Year: ");
    scanf("%d", &s2.year);

    printf("\nDate s2:\n");
    printf("Date: %d\n", s2.date);
    printf("Month: %d\n", s2.month);
    printf("Year: %d\n", s2.year);

    return 0;
}