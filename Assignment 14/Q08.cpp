#include <stdio.h>

struct Distance {
    int feet;
    int inch;
};

int main() {
    struct Distance s1;

    s1.feet = 5;
    s1.inch = 8;

    printf("Feet: %d\n", s1.feet);
    printf("Inch: %d\n", s1.inch);

    struct Distance s2;

    printf("\nEnter Feet: ");
    scanf("%d", &s2.feet);

    printf("Enter Inch: ");
    scanf("%d", &s2.inch);

    printf("\nDistance s2:\n");
    printf("Feet: %d\n", s2.feet);
    printf("Inch: %d\n", s2.inch);

    return 0;
}