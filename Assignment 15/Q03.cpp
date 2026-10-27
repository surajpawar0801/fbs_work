#include <stdio.h>

typedef struct Player {
    char name[20];
    int matches;
    int runs;
    int wickets;
} Player;

void storePlayer(Player p[]);
void displayPlayer(Player p[]);
void maxRuns(Player p[]);
void maxWickets(Player p[]);

int main(){

    Player p[10];

    storePlayer(p);

    printf("\n********** All Player Details **********\n");
    displayPlayer(p);

    printf("\n********** Maximum Runs Player **********\n");
    maxRuns(p);

    printf("\n********** Maximum Wickets Player **********\n");
    maxWickets(p);
}

void storePlayer(Player p[]){

    int i;

    for (i = 0; i < 10; i++){
	
        printf("\nEnter Player %d Details:\n", i + 1);

        printf("Enter Name: ");
        scanf("%19s", p[i].name);

        printf("Enter Matches Played: ");
        scanf("%d", &p[i].matches);

        printf("Enter Runs: ");
        scanf("%d", &p[i].runs);

        printf("Enter Wickets: ");
        scanf("%d", &p[i].wickets);
    }
}

void displayPlayer(Player p[]){
	
    int i;

    for (i = 0; i < 10; i++){
	
        printf("\nPlayer %d\n", i + 1);
        printf("Name: %s\n", p[i].name);
        printf("Matches: %d\n", p[i].matches);
        printf("Runs: %d\n", p[i].runs);
        printf("Wickets: %d\n", p[i].wickets);
    }
}

void maxRuns(Player p[]){

    int i, max = 0;

    for (i = 1; i < 10; i++){
	
        if (p[i].runs > p[max].runs){
        
            max = i;
        }
    }

    printf("Name: %s\n", p[max].name);
    printf("Matches: %d\n", p[max].matches);
    printf("Runs: %d\n", p[max].runs);
    printf("Wickets: %d\n", p[max].wickets);
}

void maxWickets(Player p[]){

    int i, max = 0;

    for (i = 1; i < 10; i++){
	
        if (p[i].wickets > p[max].wickets){
		
            max = i;
        }
    }

    printf("Name: %s\n", p[max].name);
    printf("Matches: %d\n", p[max].matches);
    printf("Runs: %d\n", p[max].runs);
    printf("Wickets: %d\n", p[max].wickets);
}
