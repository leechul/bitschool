/* 입력받은 정수의 자릿수 구하기
 * 입력 1222
 * 출력 1222는 4자리 정수입니다.
 */
#define MAX_INT_SIZE 2147483647
#include <stdio.h>

int main()
{
    int i;
    printf("please input a int number\n");
    for ( ; ; )
    {
        scanf("%d",&i);
        printf (" max int size = %d",MAX_INT_SIZE);
        if (i < MAX_INT_SIZE)
        {
            break;
        }
        printf(" int number must small than %d",MAX_INT_SIZE);
    }
    /* 
    if (0 <= i && i < 10)
    printf("1\n");
    if (10 <= i && i < 100)
    printf("2\n");
    if (100 <= i && i < 1000)
    printf("3\n");
    if (1000 <= i && i < 10000)
    printf("4\n");
    if (10000 <= i && i < 100000)
    printf("5\n");
    if (100000 <= i && i < 1000000)
    printf("6\n");
    */
    int x;
    for ( x = 1 ; x < MAX_INT_SIZE ; x++)
    {   i = i / 10;
        if ( i < 1 )
        {
            printf (" number length is %d\n", x);
            break;
        }
    }

}
