#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[20];
    int quantity;
    int price;
};

int main() {
    struct Product s1;

    s1.id = 101;
    strcpy(s1.name, "Laptop");
    s1.quantity = 5;
    s1.price = 50000;

    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Quantity: %d\n", s1.quantity);
    printf("Price: %d\n", s1.price);

    struct Product s2;

    printf("\nEnter ID: ");
    scanf("%d", &s2.id);

    printf("Enter Name: ");
    scanf("%19s", s2.name);

    printf("Enter Quantity: ");
    scanf("%d", &s2.quantity);

    printf("Enter Price: ");
    scanf("%d", &s2.price);

    printf("\nProduct s2:\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Quantity: %d\n", s2.quantity);
    printf("Price: %d\n", s2.price);

    return 0;
}