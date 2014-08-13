/* 구구단
 */
#include <stdio.h>
int main()
{
    int x, y;
    for ( x = 1; x <= 9 ; x++)
    {
        for ( y = 1; y <=9; y++)
        {   printf("%d*%d=%d    ",x,y,(x*y));
        }
        printf("\n");
    }
}
