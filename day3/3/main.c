#include <stdio.h>


int threen(int n);
void main()
{
    int i,j,k;
    for(;;)
    //while(1)  while 로 무한 루프 돌려도 됨.
    {
        k = 0;
        printf("Please input a number\n");
        scanf("%d%d",&i,&j);
        for ( i; i<= j ; i++)
        {
            int z;
            z = threen(i);
            if ( z > k )
            {
                k = z;
            }
        }
        printf("Length is %d\n",k);
    }
}

int threen(int n)
{
    printf("threen_Start number = %d\n",n);
    int length;
    length = 1;
    printf("%d  ",n);
    while ( n != 1 )
    {
        if ( n%2==0 ) // 짝수 이면
        {
            n = n/2;
            length++;
            printf("%d  ",n);
            continue;
        }

        if ( n%2==1 ) // 홀수 이면
        {
            n = n*3+1;
            length++;
            printf("%d  ",n);
            continue;
        }
    }
    printf("length is %d\n",length);
    return length;
}
