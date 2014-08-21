#include </home/leechul/bitschool/string/util.h>

int leeStrlen(char* pSrc)
{
    int strlen = 0;
    
    while (*pSrc != '\0')
    {
        pSrc++;
        strlen++;
    }

    return strlen;
}


int leeStrcpy(char* pDst, char* pSrc)
{
    printf("leeStrlen Start\n");
    while ( *pSrc != '\0' )
    {
        //printf("while start\n");

        *pDst = *pSrc;
        //printf("*pDst = *pSrc\n");
        //잘못된 코드 // *pDst++; // *(pDst++)
        pDst++;
        pSrc++;
    }
    *pDst = '\0';

    return 0;
}

int leeStrcat(char* pDst, char* pSrc)
{
    printf("leeStrcat Start\n");
    while ( *pDst != '\0')
    {
        printf("while *pDst != '\\0' start \n");
        pDst++;
    }

    while ( *pSrc != '\0')
    {
        
        printf("while *pSrc != '\\0' start \n");
        *pDst = *pSrc;
        pDst++;
        pSrc++;
    }
    *pDst = '\0';

    return 0;
}


void leeStr_ChangeStringToAsteriskFromCount(char* pSrc, int count)
{
    printf("leeStr_ChangeStringToAsteriskFromCount Start\n");
    
    printf("pSrc=%p\n",pSrc);
    printf("&pSrc=%p\n",&pSrc);
    pSrc += count;
    printf("pSrc=%p\n",pSrc);
    printf("&pSrc=%p\n",&pSrc);


    while(*pSrc != '\0')
    {
        *pSrc = '*';
        pSrc++;
    }
}

