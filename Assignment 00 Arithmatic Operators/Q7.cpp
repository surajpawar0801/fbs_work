#include <stdio.h>

int main()
{
    int minutes = 63;
    int hours = minutes / 60;
    int remMinutes = minutes % 60;

    printf("Hours is %d, remMinutes is %d", hours, remMinutes);

    
}
