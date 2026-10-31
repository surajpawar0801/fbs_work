#include <stdio.h>
int main()
{
	int a=30,b=50;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("A %d,B %d",a,b);
}