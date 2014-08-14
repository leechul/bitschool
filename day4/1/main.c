#include <stdio.h>

void change_char(char* c);
int main( )
{
    char charVal;
    printf("Please input a character\n");
    scanf("%c", &charVal);
    change_char(&charVal);
    printf("%c\n", charVal);
}

void change_char(char* c)
{
    if ( *c >= 65 && *c <= 90 )
    {
        *c += 32;
    }
    else if ( *c >= 97 && *c <=122 )
    {
        *c -= 32;
    }
    else
    {
        printf("its not a character\n");
    }
}
