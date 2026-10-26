#include <stdio.h>

struct date
{
    int date;
    int month;
    int year;
};

int main()
{
    struct date t1;
    struct date t2;

    t1.date = 26;
    t1.month = 10;
    t1.year = 2026;

    printf("%d / ", t1.date);
    printf("%d / ", t1.month);
    printf("%d\n", t1.year);

    printf("Enter date: ");
    scanf("%d", &t2.date);

    printf("Enter month: ");
    scanf("%d", &t2.month);

    printf("Enter year: ");
    scanf("%d", &t2.year);

    printf("%d / ", t2.date);
    printf("%d / ", t2.month);
    printf("%d\n", t2.year);

    return 0;
}