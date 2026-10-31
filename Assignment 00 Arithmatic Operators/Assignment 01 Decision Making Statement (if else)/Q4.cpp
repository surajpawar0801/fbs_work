#include <stdio.h>

int main()
{
    char ch = 'a';

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("vowel",ch);
    else
        printf("consonant",ch);
}
