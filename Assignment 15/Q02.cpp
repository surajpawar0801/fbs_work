#include <stdio.h>

typedef struct Time {
    int hrs;
    int min;
    int sec;
} Time;

Time storeTime(Time t);
void displayTime(Time t);
Time addTime(Time t1, Time t2);
int convertToSec(Time t);

int main(){

    Time t1, t2, t3;

    printf("Enter First Time:\n");
    t1 = storeTime(t1);

    printf("\nEnter Second Time:\n");
    t2 = storeTime(t2);

    printf("\n********** First Time **********\n");
    displayTime(t1);

    printf("\n********** Second Time **********\n");
    displayTime(t2);

    t3 = addTime(t1, t2);

    printf("\n********** Addition of Time **********\n");
    displayTime(t3);

    printf("\nFirst Time in Seconds = %d\n", convertToSec(t1));
    printf("Second Time in Seconds = %d\n", convertToSec(t2));
    printf("Total Time in Seconds = %d\n", convertToSec(t3));
}

Time storeTime(Time t){

    printf("Enter Hours: ");
    scanf("%d", &t.hrs);

    printf("Enter Minutes: ");
    scanf("%d", &t.min);

    printf("Enter Seconds: ");
    scanf("%d", &t.sec);

    return t;
}

void displayTime(Time t){

    printf("Time = %02d:%02d:%02d\n", t.hrs, t.min, t.sec);
}

Time addTime(Time t1, Time t2){

    Time t3;

    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min;
    t3.hrs = t1.hrs + t2.hrs;

    if (t3.sec >= 60){
	
        t3.min = t3.min + t3.sec / 60;
        t3.sec = t3.sec % 60;
    }

    if (t3.min >= 60){
    
        t3.hrs = t3.hrs + t3.min / 60;
        t3.min = t3.min % 60;
    }

    return t3;
}

int convertToSec(Time t){

    return (t.hrs * 3600) + (t.min * 60) + t.sec;
}
