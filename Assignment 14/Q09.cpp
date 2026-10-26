#include <stdio.h>

struct Complex {
    int real;
    int imaginary;
};

int main() {
    struct Complex s1;

    s1.real = 5;
    s1.imaginary = 3;

    printf("Real: %d\n", s1.real);
    printf("Imaginary: %d\n", s1.imaginary);

    struct Complex s2;

    printf("\nEnter Real: ");
    scanf("%d", &s2.real);

    printf("Enter Imaginary: ");
    scanf("%d", &s2.imaginary);

    printf("\nComplex s2:\n");
    printf("Real: %d\n", s2.real);
    printf("Imaginary: %d\n", s2.imaginary);

    return 0;
}