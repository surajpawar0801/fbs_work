#include <stdio.h>

typedef struct Product {
    char name[20];
    int price;
    int quantity;
} Product;

void storeProduct(Product p[], int n);
void displayCart(Product p[], int n);
void totalBill(Product p[], int n);

int main(){

    Product p[10];
    int n;

    printf("Enter Number of Products: ");
    scanf("%d", &n);

    if (n < 1 || n > 10){
	
        printf("Please enter products between 1 and 10.\n");
        return 0;
    }

    storeProduct(p, n);

    printf("\n********** Shopping Cart **********\n");
    displayCart(p, n);

    printf("\n********** Total Bill **********\n");
    totalBill(p, n);
}

void storeProduct(Product p[], int n){

    int i;

    for (i = 0; i < n; i++){
	
        printf("\nEnter Product %d Details:\n", i + 1);

        printf("Enter Product Name: ");
        scanf("%19s", p[i].name);

        printf("Enter Product Price: ");
        scanf("%d", &p[i].price);

        printf("Enter Product Quantity: ");
        scanf("%d", &p[i].quantity);
    }
}

void displayCart(Product p[], int n){

    int i;

    printf("\nName\tPrice\tQuantity\tAmount\n");

    for (i = 0; i < n; i++){
	
        printf("%s\t%d\t%d\t\t%d\n",
               p[i].name,
               p[i].price,
               p[i].quantity,
               p[i].price * p[i].quantity);
    }
}

void totalBill(Product p[], int n){

    int i, total = 0;

    for (i = 0; i < n; i++){
	
        total = total + (p[i].price * p[i].quantity);
    }

    printf("Total Amount = Rs. %d\n", total);
}
