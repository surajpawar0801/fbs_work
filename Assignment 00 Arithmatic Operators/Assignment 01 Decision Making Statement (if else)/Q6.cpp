#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch ='k';
	 if (ch>='a'&&ch<'z')
		{
      	printf("The character is Lowercase");
	} 
	else if (ch>='A'&&ch<'Z')
	{
		printf("The character is Uppercase");
	}
	else
	{
	
        printf("Not an alphabet");
    }
}