#include </home/leechul/bitschool/pointer/func.h>

void TestArrayDoublePointer()
{
    int array[4] = { 1,2,3,4, };
    int i;

    int *pArray = array;
    int **ppArray = &pArray;

    for ( i = 0; i < 4 ; i++) {
        printf("array[%d] = %d\n",i, array[i]);
    }

    for ( i = 0; i < 4 ; i++) {
        printf("*(pArray+%d) = %d\n",i, *(pArray+i));
    }

    for ( i = 0; i < 4 ; i++) {
        printf("*(*ppArray+%d) = %d\n",i,*(*ppArray+i));
    }
}

void TestArrayPointer()
{
    int array[4] = { 1,2,3,4 };
    int i;

    int *pArray = array;

    for( i=0; i<4; i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }

    for ( i=0; i<4; i++)
    {
        printf("*(array+%d) = %d\n",i, *(array+i));
    }
}

void Test2DArrayPointer()
{
    int array2d[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int i, j;

    int (*pArray2d)[4] = array2d;

    for (i=0; i<3;i++)
    {
        for(j=0; j<4; j++){
            printf("array[%d][%d] = %d\n",i,j,array2d[i][j]);
        }
    }

    for (i=0; i<3;i++){
        for(j=0;j<4;j++){
            printf("*(*(pArray2d+%d)+%d) = %d\n",i,j,*(*(pArray2d+i)+j));
        }
    }
}

void Test3DArrayPointer()
{
    int array3d[2][3][4] = {
    {{0,1,2,3},{4,5,6,7},{8,9,10,11}},
    {{13,14,15,16},{17,18,19,20},{21,22,23,24}}
    };
    
    int (*pArray3d)[3][4] = array3d;

    int i,j,k;
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            for(k=0; k<4; k++){
                printf("array3d[%d][%d][%d]=%d\n",i,j,k,array3d[i][j][k]);
            }
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            for(k=0; k<4; k++){
                printf("*(*(*(pArray3d+%d)+%d)+%d) = %d\n",i,j,k,*(*(*(pArray3d+i)+j)+k));
            }
        }
    }
}

void TestStringArrayPointer()
{
    char strArray[4] = "ABC";
    
    int i;

    char *pStrArray = strArray;

    for(i=0; strArray[i] != '\0'; i++)
    {
        printf("array[%d] = %c\n",i,strArray[i]);
    }

    for(i=0; *(pStrArray+i) != '\0'; i++)
    {
        printf("*(pStrArray+%d) = %c\n",i,*(pStrArray+i));
    }
}

void TestStringArrayDoublePointer()
{
    char *strArray[3] = {
        "ABC","DEFG","OK"
    };

    int i;

    char **pStrArray = strArray;

    for ( i = 0 ; i < 3; i++)
    {
        printf("strArray[%d] = %s\n",i,strArray[i]);      //*strArray[i]);  잘못 이해한 부분.
    }

    for ( i = 0; i<3; i++)
    {
        printf("*(pStrArray+%d) = %s\n",i, *(pStrArray+i));
    }
}
