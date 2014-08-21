#include <stdio.h>

int main()
{
    int sales_A_Year[12] = {
        100,200,300,400,500,600,700,800,900,1000,1100,1200
    };

    int sales_B_Year[12] = {
        100,200,300,400
    };

    int sales_All_Year[12] = {
        0
    };

    int i;

    for ( i = 0; i < 12; i++) {
        printf("A \t%dMonth Sales are %8d\n",i+1,sales_A_Year[i]);
    }
    for ( i = 0; i < 12; i++) {
        printf("B \t%dMonth Sales are %8d\n",i+1,sales_B_Year[i]);
    }

    for ( i = 0; i < 12; i++) {
        sales_All_Year[i] = sales_A_Year[i]+sales_B_Year[i];
    }

    for ( i = 0; i < 12; i++) {
        printf("All \t%dMonth Sales are %8d\n",i+1,sales_All_Year[i]);
    }
}
