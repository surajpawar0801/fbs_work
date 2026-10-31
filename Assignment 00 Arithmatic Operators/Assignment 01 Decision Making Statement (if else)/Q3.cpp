#include <stdio.h>
int main ()
{
	int year=2004; 
	printf ("year %d",year);
	if (year%400==0)
	{
	
		printf ("The year is a Leap Year");
    }
	else if (year%100==0)
	{
		printf ("The Year is not a Leap Year");
	}
	else if (year%4==0)
	{
		printf ("The Year is a Leap Year");
		
	}
	else
	{
		printf ("The Year is not a Leap Year");
	}
}