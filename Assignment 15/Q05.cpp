#include <stdio.h>
#include <string.h>

typedef struct Movie {
    char title[50];
    char director[30];
    int year;
    char genre[20];
} Movie;

void storeMovie(Movie m[], int *n);
void displayMovie(Movie m[], int n);
void searchMovie(Movie m[], int n);
void updateMovie(Movie m[], int n);

int main(){

    Movie m[10];
    int n = 0;
    int choice;

    while (1){
	
        printf("\n********** Movie Database **********\n");
        printf("1. Add Movie\n");
        printf("2. Display Movies\n");
        printf("3. Search Movie\n");
        printf("4. Update Movie\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice){
		
            case 1:
                storeMovie(m, &n);
                break;

            case 2:
                displayMovie(m, n);
                break;

            case 3:
                searchMovie(m, n);
                break;

            case 4:
                updateMovie(m, n);
                break;

            case 5:
                return 0 ;

            default:
                printf("Invalid Choice!\n");
        }
    }
}

void storeMovie(Movie m[], int *n){

    if (*n >= 10){
    
        printf("Movie Database is Full!\n");
        return;
    }

    printf("\nEnter Movie Title: ");
    scanf(" %49[^\n]", m[*n].title);

    printf("Enter Director Name: ");
    scanf(" %29[^\n]", m[*n].director);

    printf("Enter Release Year: ");
    scanf("%d", &m[*n].year);

    printf("Enter Genre: ");
    scanf(" %19[^\n]", m[*n].genre);

    (*n)++;

    printf("Movie Added Successfully!\n");
}

void displayMovie(Movie m[], int n){

    int i;

    if (n == 0){
	
        printf("No Movies Available!\n");
        return;
    }

    for (i = 0; i < n; i++){
	
        printf("\nMovie %d Details:\n", i + 1);
        printf("Title: %s\n", m[i].title);
        printf("Director: %s\n", m[i].director);
        printf("Release Year: %d\n", m[i].year);
        printf("Genre: %s\n", m[i].genre);
    }
}

void searchMovie(Movie m[], int n){

    char title[50];
    int i, found = 0;

    printf("Enter Movie Title to Search: ");
    scanf(" %49[^\n]", title);

    for (i = 0; i < n; i++){
	
        if (strcmp(m[i].title, title) == 0){
		
            printf("\nMovie Found!\n");
            printf("Title: %s\n", m[i].title);
            printf("Director: %s\n", m[i].director);
            printf("Release Year: %d\n", m[i].year);
            printf("Genre: %s\n", m[i].genre);

            found = 1;
            break;
        }
    }

    if (found == 0){
	
        printf("Movie Not Found!\n");
    }
}

void updateMovie(Movie m[], int n){

    char title[50];
    int i, found = 0;

    printf("Enter Movie Title to Update: ");
    scanf(" %49[^\n]", title);

    for (i = 0; i < n; i++){
	
        if (strcmp(m[i].title, title) == 0){
		
            printf("\nEnter New Movie Details:\n");

            printf("Enter Movie Title: ");
            scanf(" %49[^\n]", m[i].title);

            printf("Enter Director Name: ");
            scanf(" %29[^\n]", m[i].director);

            printf("Enter Release Year: ");
            scanf("%d", &m[i].year);

            printf("Enter Genre: ");
            scanf(" %19[^\n]", m[i].genre);

            printf("Movie Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if (found == 0){
	
        printf("Movie Not Found!\n");
    }
}
