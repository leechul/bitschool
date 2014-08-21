#include </home/leechul/bitschool/string/util.h>
#include <string.h>
int main()
{
    char str[50] = "ABC";

    printf( "leeStrlen string length are %d\n",leeStrlen(str));
    printf( "strlen string length are %d\n", strlen(str));

    char foo[50];

    if (!(leeStrcpy(foo, str)))
    {
        printf("leeStrcpy Fail");
    }


    printf("foo = %s str = %s\n",foo, str);


    leeStrcat(foo,str);
    
    printf("foo = %s str = %s\n",foo, str);
    leeStrcat(foo,"test");
    printf("foo = %s str = %s\n",foo, str);

    leeStr_ChangeStringToAsteriskFromCount(foo, 5);
    printf("foo = %s str = %s\n",foo, str);

}


